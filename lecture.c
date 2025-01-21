///WAP to ask the user to enter the name and the city and state and display the user using unformatted function
#include<stdio.h>
int main()
{
	char name[30],city[30],state[30];
	puts("Enter your name= ");
	get(name);
	puts("Enter your city= ");
	get(city);
	puts("Enter the your state= ");
	get(state);
	return 0;
}
