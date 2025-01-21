///wap a loop from 1-100 and ask the number the user up to which number to print the number///
#include<stdio.h>
int main()
{
	int i,n;
	printf(" Enter the number= ");
	scanf("%d",&n);
	for (i=1 ; i<=100 ; i++){
		printf("%d\n",i);
		if (i==n){
			break;
		}
	}
	return 0;
}
