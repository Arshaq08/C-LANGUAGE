//WAP to ask the programer to write name and rollno
#include<stdio.h>
#include<conio.h>
int main()
{
int rollno;
char name[20];
	
printf("ENTER YOUR ROLLNO=");
scanf("%d",&rollno);
printf("ENTER YOUR NAME=");
scanf("%s",&name);
printf("\n your rollnumber=%d",rollno);
printf("\n your name=%s",name);
return 0;
}
