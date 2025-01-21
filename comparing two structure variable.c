#include<stdio.h>
struct student{
	char name[50];
	int roll;
	float marks;
	
};
int main()
{
	struct student s,s1;
	printf("Enter information of first student:\n");
	printf("Enter name:");
	scanf("%s",s.name);
	printf("enter roll no:");
	scanf("%d",&s.roll);
	printf("Enter marks:");
	scanf("%.1f",&s.marks);
	printf("Enter information of second student:\n");
	printf("Enter name:");
	scanf("%s",&s1.name);
	printf("enter roll no:");
	scanf("%d",&s1.roll);
	printf("Enter marks:");
	scanf("%.1f",&s1.marks);
	if (s.marks>s1.marks)
	{
		printf("\n marks of first student are more....");
		
	}
	else
	{
	    	printf("\n marks of second student are more....");	
	}
	return 0;
	
}
