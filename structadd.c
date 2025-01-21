#include<stdio.h>
struct address{
	char housename[25];
	char city[25];
	char streetname[25];
};
struct employee{
	int id;
	char name[25];
	float salary;
	
	struct address add;
	
};
int main()
{
	struct employee E;
	printf("\n\t Enter employee ID: ");
	scanf("%d",&E.id);
	printf("\n \t Enter employee name: ");
	scanf("%s",&E.name);
	printf("\n\t Enter the salary: ");
	scanf("%f",&E.salary);
	printf("\n\t Enter employee housename: ");
	scanf("%s",&E.add.housename);
	printf("\n\t Enter employee city: ");
	scanf("%s",E.add.city);
	printf("\n\t Streetname: ");
	scanf("%s",&E.add.streetname);
	 
	 
	 printf("\n DETAILS OF EMPLOYEES");
	 printf("\n Employee ID %d",E.id);
	 printf("\n Employee name %s",E.name);
	 printf("\n employee salary %f",E.salary);
	 printf("\n Employee housename %s",E.add.housename);
	 printf("\n Employee city %s",E.add.city);
	 printf("\n Employee streetname %s",E.add.streetname);
	 
}
