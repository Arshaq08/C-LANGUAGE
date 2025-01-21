//WAP to print a detail of student l;ike name ,registration no,roll,state,city,cgpa using variaples
#include<stdio.h>
#include<conio.h>
int main()
{ 
char name[15]="ARSHAQUE";
int registration=12219354;
int rollno=59;
double contact=9048786526;
char city[15]="MALAPPRUAM";
char state[15]="KERALA";
float CGPA=8.08;

printf("your name =%s \n",name);
printf("your registration no =%ld \n",registration);
printf("your roll no =%d \n",rollno);
printf("your contact =%lf \n",contact);
printf("your city =%s \n",city);
printf("your state =%s \n",state);
printf("your CGPA =%f \n",CGPA);
return 0;
}
