#include<stdio.h>
int square(int y);
int main()
{
	int a=5,b=10;
	int x;
	for (x=1;x<=10;++x){
		printf("%d",square(x));
		puts(" ");
	}
	printf("%d",add(a,b));
}
int square(int y){
	return y*y;
	}
int add(int c,int d){
	return c+d;
}
