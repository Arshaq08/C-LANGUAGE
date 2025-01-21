//WAP to ask the user to enter the record of one student using struct
#include<stdio.h>
struct student{
	int rollno;
	float CGPA;
	char *name0;
};

int main()
{
	struct student details;

	details.rollno=69;
	details.CGPA=8.9;
	details.name="Amir khan";
	printf("%d %f %s \n",details.rollno,details.CGPA,details.name);
}
