#include<stdio.h>
int main()
{
    int n,i=1;
	printf("Enter the value n= ");
	scanf("%d",&n);
	while (i<=10)
	{
		printf("%d * %d= %d\n",n,i,(n*i));
		i=i+1;
	}
	return 0;
}
