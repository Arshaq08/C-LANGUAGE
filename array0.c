#include<stdio.h>
int main()
{
	int a[100],n,i;
	printf("\n Enetr number of elements: ");
	scanf("%d",&n);
	printf("\n Enter array elements: ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("\n Entered array elemnts are: ");
	for(i=0;i<n;i++){
		printf("\n%d",a[i]);
	}
	return 0;
}
