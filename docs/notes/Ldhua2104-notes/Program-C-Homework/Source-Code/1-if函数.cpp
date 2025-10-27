#include "stdio.h"

int use_if(int x)
{
	int y;
	
	if (x < 0)
		y = -1;
	else if (x = 0)
		y = 0;
	else
		y = 1;
		
	return y;
}

int main()
{
	int x;
	scanf("%d",&x);
	
	printf("%d",use_if(x));
} 
