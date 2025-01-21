#include<stdio.h>
int main()
{
	int n,a[10],i,max,min;
	printf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	max=a[0];
	for(i=1;i<n;i++){
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("\n Maximum elements is :%d",max);
	printf("\n Minimum elements is :%d",min);
}
