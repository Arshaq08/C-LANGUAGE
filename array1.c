#include<stdio.h>
int main()
{
	int a[5]={1,2,3,4,5};
	int i;
	printf("\n printing base address of the array: ");
	printf("\n%u %u %u",&a[0],a,&a);
	printf("\n priting addresses of all array elements: ");
	for (i=0;i<5;i++){
		printf("\n%u",&a[i]);
	}
	return 0;
}
