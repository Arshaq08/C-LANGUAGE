///WAP to ask the user to enter any 10 random numbers sort in decsecinding order
#include<stdio.h>
int main()
{
	int a[100];
	int n;
	int hold,i,j;
	printf("\n  the value of n: ");
	scanf("%d",&n);
	printf("\n Enter elements :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Date items in orginal order: ");
	for (i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	for(i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			if(a[j]<a[j+1])
			{
			hold=a[j];
			a[j]=a[j+1];
			a[j+1]=hold;
			
			}	
		}
	}
	printf("\n Date items in descendimg order: ");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
		
	}
}
