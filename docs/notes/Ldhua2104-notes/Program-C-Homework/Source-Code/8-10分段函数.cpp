#include "stdio.h"

int f(int x)
{
	if( x > 0)
		return 1;
	else if( x == 0)
		return 0;
	else
		return -1;
	
}

int main()
{
	 int x;
	 scanf("%d",&x);
	 
	 printf("f(%d)=%d",x,f(x));
}
