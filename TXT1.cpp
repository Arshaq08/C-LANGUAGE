#include<conio.h>
void main()
{
	FILE *fptr;
	char c;
	clrscr();
	fptr=fopen("a.text","r");
	printf("the line of text is ");
	while ((c=getc(fptr))!=EOF)
	{
		printf("%c",c);
	}
	fclose(fptr);
	getch()
}
