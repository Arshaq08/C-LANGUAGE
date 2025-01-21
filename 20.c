/*#include<stdio.h>
int main()
{
	int *ptr=NULL;
	int a=10;
	printf("%u",ptr);
//	printf("%d",*ptr);
	ptr=&a;
	printf("\n%d",*ptr);
	return 0;
}*/

/*#include<stdio.h>
int main()
{
	int *ptr;
	int a=10;
//	printf("%u",ptr);
//	printf("%d",*ptr);
	ptr=&a;
	printf("\n%d",*ptr);
	return 0;
}*/

/*#include<stdio.h>
int main()
{
	int x=10;
	char ch='A';
	float f=10.11;
	void *gp;
	gp=&x;
	printf("\n Generic pointer points to the integer value =%d",*(int*)gp);
	gp=&ch;
	printf("\n Generic pointer points to the character =%c",*(char*)gp);
	gp=&f;
	printf("\n Generic pointer points to the float value =%.2f",*(float*)gp);
	return 0;
}*/


/*#include<stdio.h>
int main()
{
	int var1 =60,var2=70;
	int *const ptr=&var1;
	printf("\n %d",*ptr);
	// ptr=&var2;
	//printf("%d\n,*ptr)
	return 0;
	
}*/
/*#include<stdio.h>
int main()
{
	int *ptr;
	{
		int val=23;
		ptr=&val;
		printf("\n %d",*ptr);
		printf("\n %u",ptr);
	}
	printf("\n %u",ptr);
	ptr=NULL;
	printf("\n %u",ptr);
	return 0;
}*/
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n=1;
	int *ptr=(int*)malloc(n*sizeof(int));
	*ptr=6;
	printf("%d",*ptr);
	printf("\n %d",ptr);
	printf("\n %d",ptr);
	ptr= NULL;
	printf("\n %d",ptr);
	return 0;
}*/




/*#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9};
	int*p1,*p2;
	p1=arr;
	p1++;
	printf("%d",*p1);
	p1--;
	printf("\n%d",*p1);
	p1=p1+2;
	printf("\n%d",*p1);
	p1=p1-2;
	printf("\n%d",*p1);
	p2=&arr[4];
	printf("\n%d",p2-p1);
            //	while(p1<=p2)
            //	{
            //		printf("\n%d",*p1);
            //		p1++;
            //	}
            //	printf("\n%d",p1+p2);
            //	printf("\n%d",p1/p2);
            //	printf("\n%d",p1*p2);
            //	printf("\n%d",p1%p2);
            //	printf("\n%d",p1*2);
            //	printf("\n%d",p1/2);
            //	printf("\n%d",p1%2);
	return 0;
}*/
#include<stdio.h>
int main()
{
	int a[]={1,2,3,4,5};
//	int *p=a;
	int *p=&a[0];
	int i;for(i=0;i<5;i++)
	{
		printf("\n%d",*(p+i));
		
	}
return 0;
}
