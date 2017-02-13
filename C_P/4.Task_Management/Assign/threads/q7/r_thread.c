#include "errors.h"

void *thread_fun(void *arg)
{
	int t_policy;
	int tp;	
	struct sched_param t_prio;
	pthread_attr_t gattr;

	tp = pthread_getschedparam(pthread_self(), &t_policy, &t_prio);
	if (tp != 0)
		err_abort (tp, "pthread_getschedparam failed:");
	if (t_policy == SCHED_RR)
		printf ("child sched_rr\n");
	if (t_policy == SCHED_FIFO)
		printf ("child sched_fifo\n");
	if (t_policy == SCHED_OTHER)
		printf ("child sched_other\n");

	printf ("Child priority: %d\n", t_prio.sched_priority);

	return NULL;
}

int main()
{
	int p;
	pthread_t thr;
	pthread_attr_t attr;
	struct sched_param prio;

	p = pthread_attr_init(&attr);
	if(p != 0)
		err_abort(p, "pthread_attr_init failed:");

	p = pthread_attr_setschedpolicy (&attr,SCHED_RR);
	if(p != 0)
		err_abort(p, "pthread_setschedpolicy failed:");
	prio.sched_priority = 87;

	p = pthread_attr_setschedparam(&attr, &prio);
	if(p != 0)
		err_abort(p, "pthread_setschedparam");


	p = pthread_attr_setinheritsched(&attr, PTHREAD_EXPLICIT_SCHED);
	if(p != 0)
		err_abort(p, "pthread_attr_setinheritsched");

	p = pthread_create(&thr, &attr, thread_fun, NULL);
	if(p != 0)
		err_abort(p ,"pthread_create is failed\n");

	pthread_exit(NULL);
	return 0;
}
