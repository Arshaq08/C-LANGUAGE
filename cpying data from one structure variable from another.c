#include<stdio.h>
struct student{
	char name[50];
	int roll;
	float marks;
	
};
int main()
{
	struct student s,s1;
	printf("Enter the information: \n");
	printf("Enter name: ");
	scanf("%s",s.name);
	printf("Enter roll  number: ");
	scanf("%d",&s.roll);
	printf("Enter marks: ");
	scanf("%f",&s.marks);
	s1=s;
	printf("Displaying information: \n");
	printf("Name: ");
	puts(s1.name);
	printf("Roll number: %d\n",s1.roll);
	printf("marks: %.1f\n",s1.marks);
	return 0;
}

