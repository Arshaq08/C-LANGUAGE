#include<stdio.h>


main()
{
	FILE *fp;
	char name[20],arr[50];
	printf("Enter the file name:");
	scanf("%s",&name);
	fp=fopen(name,"W");
	if(fp==NULL)
	{
		printf("file can't be opened");
		
	}
	else
	{
		printf("The string is");
		scanf("%s",&arr);
		fputs(arr,fp);
	}
	fclose(fp);
}
