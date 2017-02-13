#include<stdio.h>

char gui;
const int guc;
volatile int guv;
static int gus;

int gii = 0;
const int gic = 0;
volatile int giv = 0;
static int gis = 0;

int gi = 1 ;
const int gc = 2;
volatile int gv = 3;
static int gs = 4;

register int var1 asm("ebx");

	const volatile gucv;
	const volatile gicv = 0;
	const volatile gcv = 10;
	
	const static gucs;
	const static gics = 0;
	const static gcs = 10;
	
	static volatile gusv;
	static volatile gisv = 0;
	static volatile gsv = 10;

	static volatile const int gusvc;
	static volatile const int gisvc = 0;
	static volatile const int gsvc = 10;

int main(void)
{
	int lu;
	const int luc;
	volatile int luv;
	static char lus;
	
	int li = 0;
	const int lic = 0;
	volatile int liv = 0;
	static int lis = 0;

	int l = 11;
	const int lc = 12;
	volatile int lv = 13;
	static int ls = 14;

	register int reg1;
	register int reg2 = 100;

	const volatile ucv;
	const volatile icv = 0;
	const volatile cv = 10;
	
	const static ucs;
	const static ics = 0;
	const static cs = 10;
	
	static volatile usv;
	static volatile isv = 0;
	static volatile sv = 10;

	static volatile const int usvc;
	static volatile const int isvc = 0;
	static volatile const int svc = 10;

	return 0;
}
