#include<stdio.h>
int main()
{
	int i,j;
	printf("Displaying right angled triangle for  5 rows");
	for (i=1;i<=5;i=1+1){
		for (j=1;j<=i;j=j+1);{
		printf("*");
		}
		printf("\n");
	}
	return 0;
}
