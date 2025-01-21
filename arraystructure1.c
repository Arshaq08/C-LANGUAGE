#include<stdio.h>
struct car{
	char name[50];
	int seat;
	float price;
};
int main()
{
	int i,n;
	printf("Enter the number of cars: ");
	scanf("%d",&n);
	struct car mycar[n];
	 for(i=0;i<n;i++){
	 	printf("\n \n enter data for car[%d];\n",i);
	 	scanf("%s %d %f",&mycar[i].name,&mycar[i].seat,&mycar[i].price);
	 	
	 }
	for(i=0;i<n;i++){
		printf("Data about your car[%d] is: %s %d %f \n ",i,mycar[i].name,mycar[i].seat,mycar[i].price);		
	}
}
