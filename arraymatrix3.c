#include<stdio.h>
int main()
{
	int a[10][10],transpose[10][10],c,r,i,j;
	printf("Enter the rows and columns of matrix:");
	scanf("%d %d",&r,&c);
	printf("\n enter elements of matrix:\n");
	for(i=0;i<r;i++){
		for(j=0;j<r;j++){
			printf("Enter element a%d%d: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n Entered matrix: \n");
	for(i=0;i<r;i++){
		for(j=0;j<r;j++){
			printf("%d",a[i][j]);
		}
		printf("\n\n");
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			transpose[i][j]=a[i][j];
		}
	}
	printf("\nTraspose of matrix:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d",transpose[i][j]);
			
		}
		printf("\n\n");
	}
	return 0;	

}
