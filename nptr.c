#include<stdio.h>
void cubebyreference(int *nptr);
int main(void)
{
	int number=5;
	printf("The orginal value of number is %d",number);
	cubebyreference(&number);
	printf("\nThe new value of number is %d\n",number);
}
void cubebyreference( int *nptr)
{
	*nptr=*nptr * *nptr * *nptr;
}
