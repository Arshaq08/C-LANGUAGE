/*#include<stdio.h>
int main()
{
	int a[]={1,2,3,4,5};
	int *p=a;
	
	printf("\n %d",*(p+1));
	printf("\n %d",*(a+1));
	printf("\n %d",p[1]);
    printf("\n %d",1[p]);
	printf("\n %d",1[a]);
	
	
	return  0;	
	
	
}*/


/*#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5};
	int i;
	int *p;
	p=arr;
	printf("\n  first value is :%d",*p);
	p=p+1;
	printf("\n  second value is :%d",*p);
	*p=45;
	p=p+2;
	*p=-2;
	printf("\n  modified array :");
	for (i=9;i<5;i++)
	{
		printf("\n %d",arr[i]);
		
	}
	p=arr;
	*(p+1)=0;
	*(p-1)=1;
	printf("\n modified array is:");
	for (i=0;i<5;i++)
	{
		printf("\n %d",*(p+1));
		
		
	}	
	
}*/


/*#include<stdio.h>
int main()
{
	int i,n;
	int a[10],*parr=a;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	printf("\n enter the elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",parr+1);
	}
	printf("\n Entered array elements are : ");
	for(i=0;i<n;i++)
	{
		printf("\t %d",*(parr+1));
	}
}*/


/*#include<stdio.h>
int main()
{
	int i,n,arr[20],sum=0;
	int *pn=&n,*parr=arr,*psum=&sum;
	float mean=0.0,*pmean=&mean;
	printf("\n Enter the number of elements in the array: ");
	scanf("%d",pn);
	for(i=0;i<*pn;i++)
	{
		printf("\n Enter the number: ");
     	scanf("%d",(parr+i));
	}
	for(i=0;i<*pn;i++)
	{
		*psum=*psum+*(arr+i);
	}
	*pmean=*psum/ *pn;
	printf("\n  the number you enetered: ");
	for(i=0;i<*pn;i++)
	{
		printf("\n%d",*(arr+i));
    }
		printf("\n The sum is :%d",*psum);
		printf("\n The mean is :%f",*pmean);
		return 0;
}*/



