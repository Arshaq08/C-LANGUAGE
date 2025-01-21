#include<stdio.h>
int cubebyvalue(int n);
int main()
{
	int number;
	scanf("%d",&number);
	printf("number is =%d\n",number);
	printf("The orginal value of number is %d",number);
	cubebyvalue(number);
	printf("\nThe new value of number is %d\n",number);
}
int cubebyvalue(int n){
	return n*n*n;
}
