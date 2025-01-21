#include<stdio.h>
 int main()
 {
 	int n;
 	printf("Write a number= ");
 	scanf("%d",&n);
 	do{
 		printf("%d\n",n);
 		n=n-1;
	 }
	 while (n>0);
	 
	 return 0;
 }
