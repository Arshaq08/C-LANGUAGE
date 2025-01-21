/*#include<stdio.h>
int main()
{
	int *pnum;
	char *pch;
	float pfnum;
	double *pdnum;
	long * plnum;
	printf("\nsize of the integer=%d",sizeof(pnum));
	printf("\nsize of the char=%d",sizeof(pch));
	printf("\nsize of the float=%d",sizeof(pfnum));
	printf("\nsize of the double=%d",sizeof(pdnum));
	printf("\nsize of the long=%d",sizeof(plnum));
return 0;
}*/

#include<stdio.h>
int main()
{
	double radius,area=0.0;
	double *pradius=&radius,*parea=&area;
	printf("\n Enter the radius of the circle");
	scanf("%f",pradius);
	*parea=3.15*(*pradius)*(*pradius);
	printf("\n the area of thge circle with radius %.2lf=%.2lf",*pradius,*parea);
	return 0;
}
