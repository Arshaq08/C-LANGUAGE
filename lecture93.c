///WAP to ask the user to enter the name and the city and state and display the user using unformatted function
#include<stdio.h>
int main()
{
	char name[30],city[30],state[30];
	printf("Enter your name= ");
	get(name);
	printf("Enter your city= ");
	get(city);
	printf("Enter the your state= ");
	get(state);
	puts("Entered name: ");
	puts(name);
	puts("ENtered city: ");
	puts(city);
	puts("Entered state: ");
	puts(state);
}
