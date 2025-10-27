#include "stdio.h"

int Fibonacci(int a,int b,int n);

int main()
{
	int n;
	scanf("%d",&n);
	
	printf("%d",Fibonacci(1,1,n-2));
}

int Fibonacci(int a,int b,int n)
{
	if( n == -1 || n == -2)
		return 1;
		
	int c = a + b;
	n--;
	if(n >= 0)
		Fibonacci(b ,c,n);
	else
		return c;
}
