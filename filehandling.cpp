/*#include<stdio.h>

struct student{
	int rollno;
	char name[20];
};
int main()
{
	struct student st;
	FILE*fptr;
	fptr=fopen("a.txt","r");
	fread(&st,sizeof(st),1,fptr);
	printf("Roll number is %d",st.rollno);
	printf("\nName is %s",st.name);
	fclose(fptr);	
	
	
	
}*/


/*#include<stdio.h>

struct student{
	int rollno;
	char name[20];
};
int main()
{
	struct student st;
	FILE*fptr;
	fptr=fopen("a.txt","w");
	printf("Enter roll number : ");
	scanf("%d",&st.rollno);
	printf("Enter name : ");
	scanf("%s0",&st.name);
	fwrite(&st,sizeof(st),1,fptr);
	fclose(fptr);	
	
	
	
}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *fptr;
	int i,n;
	fptr=fopen("a.txt","w");
	for(i=1;i<=10;i++){
		printf("Enter number");
		scanf("%d",&n);
		putw(n,fptr);
	}
	fclose(fptr);
}*/

#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *fptr;
	int i,n;
	fptr=fopen("a.txt","r");
	printf("\n The number are : ");
	for(i=1;i<=10;i++){
		n=getw(fptr);
		printf("%d\t",n);	
	}
	fclose(fptr);
}


