#include<stdio.h>
 int main()
 {
 	int num1,num2;
 	printf("Enter the value= ");
 	scanf("%d",&num1);
 	
 	for (num2;num2<10;num2=num2+1){
 		printf("%d * %d = %d",num1,num2,num1*num2);
	 }
 	return 0;
 }
