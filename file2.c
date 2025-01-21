#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fptr;
	char name[10];
	int sal;
	fptr=fopen("a.txt","r");
	fscanf(fptr,"%s%d",name,&sal);
	while(!feof(fptr))
	{
		printf("%s%d",name,sal);
		fscanf(fptr,"%s%d",name,&sal);
		
	}
	fclose(fptr);
}
