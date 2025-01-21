#include<stdio.h>
int main()
{
	int num;
	printf("Write the number= ");
	scanf("%d",&num);
	
	for(num;num>0;num=num-1){
		printf("%d\n",num);
	}
	return 0;
}
