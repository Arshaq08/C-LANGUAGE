#include<stdio.h>
int main()
{
	int a;
	int *aptr;
	
a=7;
aptr=&a;
printf("the addresss of a is %p",
"\nthe value of of aptr is %p",&a,aptr );

printf("\n\n the value of a is %d",
"\n the value of *aptr is %d",a,*aptr);

printf("\n showinv that * and &are complenets""each other\n&*aptr=%p"
"\n*&aptr =%p",*&aptr,*&aptr);
return 0;
}
