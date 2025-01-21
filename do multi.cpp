///#include<stdio.h>
int main()
{
	int num1=1,num2;
	printf("enter the num1= ");
	scanf("%d",&num1);

	do{
		printf("&d * %d = %d",num1,num2,num1*num2);
		num2=num2+1;
	}
	while (num2<10);
	
	return 0;
}///
