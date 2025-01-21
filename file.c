#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("a.txt","w");
    if(fptr == NULL)
        printf("\n file cannot be opened for creation");
    else
        printf("\n file created successfully");
    fclose(fptr);
}
