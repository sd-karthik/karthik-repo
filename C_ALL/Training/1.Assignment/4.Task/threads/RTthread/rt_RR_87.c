#include "errors.h"

void *thread_fun(void *arg)
{
	int p;
	int t_policy;
	struct sched_param t_prio;
	pthread_attr_t t_attr;
	
	p = pthread_getschedparam(pthread_self(), &t_policy, &prio);
	if(p != 0)
		err_abort(p ,"pthread_getschedparam");

	if(i == SCHED_RR)
		printf("child sched_rr\n");
	else if(i == SCHED_FIFO)
		printf("child sched_fifo\n");
	else if(i == SCHED_OTHER)
		printf("child sched_other\n");

	printf("child priority %d\n",prio.sched_priority);	
	return NULL;
}

int main()
{
	pthread_t thr;
	pthread_attr_t attr;
	pthread_attr_t *attrp = NULL;
	struct sched_param prio;
	int fd;
	prio.sched_priority = 87;

	attrp = &attr;

	if((pthread_attr_init(&attr)) != 0)
		printf("pthread_attr_init is failed\n");


	if((pthread_attr_setinheritsched(&attr, PTHREAD_INHERIT_SCHED)) != 0)
		printf("pthread_attr_setinheritsched is failed\n");


	if((pthread_setschedparam(pthread_self(), SCHED_RR, &prio)) != 0)
		printf("pthread_setschedparam is failed\n");


	if((pthread_create(&thr, &attr, thread_fun, &p))!= 0)
		printf("pthread_create is failed\n");

	fd = open("/dev/myChar", O_RDWR);

	if (fd < 0)
		perror("Unable to open the Device");
	else
		printf("File Opened Successfully %d\n", fd);

	ioctl(fd, getpid(), 10);

	pthread_exit(NULL);
	return 0;
}
