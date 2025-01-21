#include<stdio.h>
int main()
{
	int i;
	for (i=1;i<5;i++){
		if (i==2){
			goto there;
		}
		printf("%d\n",i);
	}
	there:
		printf("TWO");
		
		return 0;
}
