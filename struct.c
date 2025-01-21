#include<stdio.h>
struct car{
	char *name;
	int seats;
	float price;
};

int main()
{
	struct car mycar;
	mycar.name="BMW";
	mycar.price=1000;
	mycar.seats=4;
	printf("%s %f %d \n",mycar.name,mycar.seats,mycar.price);
	
}
