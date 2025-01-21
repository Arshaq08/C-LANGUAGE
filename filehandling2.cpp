#include<stdio.h>
int main()
{
	FILE *fptr;
	char temp,name[20];
	printf("Enter name of the file");
	scanf("%s","a.txt");
	fp=fopen(name,"r+");
	while ((temp=getc(fptr))!=EOF)
	{
		if (temp=='x')
		{
			fseek(fp,-1,1);
			putc('y',fp)
		}
	}
	fclose(fp)
}
