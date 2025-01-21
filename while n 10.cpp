#include<stdio.h>
int main()
{
	int n;
	printf("Enter the value of n= ");
	scanf("%d",&n);
	while (n<10){
		printf("\n%d",n);
		n=n+2;
	}
	return 0;
}
