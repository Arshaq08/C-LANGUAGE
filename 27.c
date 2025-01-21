/*#include<stdio.h>
int main()
{
	char name[100];
	puts("\n Enter a string: ");
	gets(name);
	printf("\n string is : ");
	puts (name);
}*/

/*#include<stdio.h>
#include<string.h>

int main()
{
    char ori[20],dup[20];
    char *z;
    printf("\n Enter your name: ");
    gets(ori);
    z = strcpy(dup,ori);
    printf("Original String is: %s",ori);
    printf("\n Duplicate String is: %s",dup);
    printf("\n Value of z is: %s",z);
    return 0;
}*/

/*#include<stdio.h>
#include<string.h>

int main()
{
    char str1[15],str2[15];
    int n;
    printf("\n Enter Source String: ");
    gets(str1);
    printf("\n Enter Destination String: ");
    gets(str2);
    printf("Enter number of characters to copy in destination string: ");
    scanf("%d",&n);
    strncpy(str2,str1,n);
    printf("Source string is: %s",str1);
    printf("\n Destination String is: %s",str2);
    return 0;
}*/


/*#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20],str2[20];
    printf("\n Enter first string:");
    gets(str1);
    printf("\n Enter second string:");
    gets(str2);
    strcat(str1,str2);
    printf("\n string after concatenation:%s",str1);
    return 0;
}*/

/*#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20],str2[10];
	int x;
	printf("\n Enter first string:");
	gets(str1);
	printf("\n Enter second string:");
    gets(str2);
    x=strcmp(str1,str2);
    if(x==0)
    {
    	printf("\n strings are equal");
	}
	else if(x>0)
	{
		printf("\n first string is greather than second string (strings are not equal)");
	}
	else
	{
		printf("\n first string is less than second string (strings are not equal)");
	}
    
	return 0;
}*/


/*#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20],str2[10];
	int x,n;
	printf("\n Enter first string:");
	gets(str1);
	printf("\n Enter second string:");
    gets(str2);
    printf("\n Enter no of characters to compare:");
    scanf("%d",&n);
    x=strncmp(str1,str2,n);
    if(x==0)
    {
    	printf("\n strings are equal");
	}
	else if(x>0)
	{
		printf("\n first string is greather than second string (strings are not equal)");
	}
	else
	{
		printf("\n first string is less than second string (strings are not equal)");
	}
    
	return 0;
}*/


/*#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20],str2[10];
	int x;
	printf("\n Enter first string:");
	gets(str1);
	printf("\n Enter second string:");
    gets(str2);
    x=stricmp(str1,str2);
    if(x==0)
    {
    	printf("\n strings are equal");
	}
	else if(x>0)
	{
		printf("\n first string is greather than second string (strings are not equal)");
	}
	else
	{
		printf("\n first string is less than second string (strings are not equal)");
	}
    
	return 0;
}*/


/*#include<stdio.h>
#include<string.h>
int main()
{
	char  str[]="hello";
	printf("\n Length of the given string is : %d",strlen(str));
	return 0;
}*/



/*#include<stdio.h>
#include<string.h>
int main()
{
	char  s[100]="hello";
	printf("\n%s",strrev(s));
	return 0;
}*/


/*#include<stdio.h>
#include<string.h>
int main()
{
	char  s[100]="hello";
	strupr(s);
	puts(s);
	strlwr(s);
	puts(s);
	return 0;
	
}*/

/*#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100],s2[100];
	int i;
	printf("\n Enter the string:");
	gets(s1);
	i=0;
	while(s1[i]!='\0')
	{
		s2[i]=s1[i];
		i++;
	}
	s2[i]='\0';
	printf("\n copied string is : %s",s2);
	return 0;
	
}**/


#include<stdio.h>
#include<string.h>
int main()
{
	char x[100];
	int i=0;
	printf("\n Enter the string ");
	gets(x);
	while(x[i]!='\0')
	{
		i++;
	}
	printf("\n Length of the string is: %d",i);
	return 0;
}

