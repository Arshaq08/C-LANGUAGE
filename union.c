///#include<stdio.h>
///#include<string.h>
///union Data{
///	int i;
///	float f;
///	char str[20];
///	
///};
//int main()
//{
//	union Data data;
//	data.i=10;
//	data.f=220.5;
//	strcpy(data.str,"C programming");
//	printf("data.i:%d\n",data.i);
//	printf("data.f:%f\n",data.f);
//	printf("data.str:%s\n",data.str);
//	return 0;
//}


/*#include<stdio.h>
#include<string.h>
union Data{
	int i;
	float f;
	char str[20];
	
};
int main()
{
	union Data data;
	data.i=10;
	printf("data.i:%d\n",data.i);
	data.f=220.5;
	printf("data.f:%f\n",data.f);
	strcpy(data.str,"C programming");
	printf("data.str:%s\n",data.str);
	return 0;
}*/


/*#include<stdio.h>
union employee{
	char name[30];
	int id;
	float salary;
	
};

int main()
{
	int n,i;
	union employee u[100];
	printf("\nEnter value of n:");
	scanf("%d",&n);
	fflush(stdin);
	for(i=0;i<n;i++)
	{
		printf("\n Enter name:");
		fflush(stdin);
		get(u[i].name);
		printf("\n Entered name is:%s",u[i].name);
		printf("\n Enter id:");
		fflush(stdin);
		scanf("%d",&u[i].id);
		printf("\n Entered id is :%f",u[i].id);
		printf("\n Enter salary:");
		fflush(stdin);
		scanf("%d",&u[i].salary);
		printf("\n Entered salary is :%f",u[i].salary);
	}
	return 0;
	
}*/






