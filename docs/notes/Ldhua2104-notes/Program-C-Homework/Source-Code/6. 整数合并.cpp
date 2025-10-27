#include "stdio.h"

int comb(int a,int b);

int main()
{
	int a;
	int b;
	scanf("%d",&a);	
	scanf("%d",&b);

	printf("%d",comb(a,b));	
}

int comb(int a,int b)
{
	return (b / 10) * 1 + (a / 10) * 10 + (b % 10)*100 + (a % 10) * 1000;
}
