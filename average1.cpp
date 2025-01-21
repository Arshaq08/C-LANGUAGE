#include<stdio.h>
int main()
{
	float average,total;
	int counter;
	printf("enter the value of total in integer type= ");
	scanf("%d",&total);
	printf("Enter the value of counter in float type= ");
	scanf("%f",&counter);
	
	printf("the value of average %d",average=total/(int)counter);
	return 0;
}
