#include<stdio.h>
int a=10;
void print();
int main()
{
	printf("\n value of a is:%d",a);
	print();
	printf("\n value of a is:%d",a);
	return 0;
}
void print()
{
	printf("\n value of a is:%d",a);
	a=20;
}
