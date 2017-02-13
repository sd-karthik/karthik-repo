#include<stdio.h>
#include<stdlib.h>

struct link {
	struct link *next;
	struct link *prev;
};

struct task {
	long state;
	int pid;
	int flags;
	int prio;
	unsigned char fpu_counter;
	struct link tasks;
	char rcu_read;
	int tgid;
	char comm[16];
	unsigned int rt_prio;
};

int  print_struct(unsigned int  *var,int  mem,struct task tas4  );
int main()
{
	struct task tas;
	struct task tas1;
	
	unsigned int *var1=NULL;
	
	tas.state = 25; 	                                                             
    tas.pid=1215;                                                                    
    tas.flags=1;                                                                  
    tas.prio=10;                                                                   
    tas.fpu_counter='A';                                                  
    tas.tasks.next = tas1.prio;   
	tas.tasks.prev = NULL;                                                       
    tas.rcu_read='B';                                                              
    tas.tgid=420;                                                                   
    tas.comm[16]="task1";                                                              
    tas.rt_prio=840;  

	
	tas1.state = 250; 	                                                             
    tas1.pid=12150;                                                                    
    tas1.flags=10;                                                                  
    tas1.prio=100;                                                                   
    tas1.fpu_counter='C';                                                  
    tas1.tasks.next = NULL;
	tas1.tasks.prev = tas.prio;                                                          
    tas1.rcu_read='D';                                                              
    tas1.tgid=520;                                                                   
    tas1.comm[16]="task2";                                                              
    tas1.rt_prio=80;

	var1 =&(tas1.prio);
	
	  printf("Var1=0x%x",var1);

//	print_struct (var1, tas.prio,tas);

}

	int  print_struct(unsigned int *var,int  mem,struct task tas4 )
{
	struct task tas3;
	struct task *tas4=NULL;
	int size;
	tas3.state = 250;                                                           
    tas3.pid=1250;                                                             
    tas3.flags=14;                                                               
    tas3.prio=1056;                                                              
    tas3.fpu_counter='e';                                                       
    tas3.tasks.next = NULL;                                                    
    tas3.tasks.prev = NULL;                                                
    tas3.rcu_read='f';                                                          
    tas3.tgid=654;                                                              
    tas3.comm[16]="task3";                                                      
    tas3.rt_prio=800; 
	  
	size = sizeof(tas3);
	printf("size=%d\n",size);
	int var2;
	int var3;
	int offset;
	int addr = &(tas4);
			
	var2 = &(tas3);
	var3 = &(tas3.prio);
	offset = (var3-var2);
	tas4 = var-offset;
	printf("var2  :0x%x\n",var2);
	printf("var3  :0x%x\n",var3); 
	printf("offset:0x%x\n",offset);
	printf("tas4:0x%x\n",tas4);	
	printf("tas.prio addr=0x%x\n",var);
	
//	printf("%d",*(var));
}





 
