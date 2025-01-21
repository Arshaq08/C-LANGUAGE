///WAP to print any series and in that ask the user to skip any two number using continue keyword
#include<stdio.h>
int main()
{
	int i,j,n1,n2;
	printf("Enter 2 numbers which you want to skip= ");
	scanf("%d",&n1,&n2);
	for(i=1;i<=5;i++){
		for (j=1;j<=30;j++){
		    if (i==n1){
			continue;
		}
         else if(i==n2){
         	continue;
		 }
		}
		
	}
	return 0;
}
