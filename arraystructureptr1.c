#include<stdio.h>
struct car{
	char name[50];
	int seats;
	float price;
};
int main()
{
	struct car mycar={"Renault",2,500000};
	struct car *mycarptr;
	mycarptr=&mycar;
	
	printf("%s %d %f\n%s %d %f\n%s %d %f\n",mycar.name,mycar.seats,mycar.price,mycarptr->name,mycarptr->seats,mycarptr->price,(*mycarptr).name,(*mycarptr).seats,(*mycarptr).price);
}
