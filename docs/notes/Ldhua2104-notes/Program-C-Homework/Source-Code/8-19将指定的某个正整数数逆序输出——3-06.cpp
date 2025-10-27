#include "stdio.h"

void func(int x);

int main()
{
	int x;
	scanf("%d",&x);
	
	func(x);
} 

void func(int x)
{
	int unit, decade, hundred;
	int x_res = 0;
	
	if(x < 0)
		printf("error");
	else if (x < 10 && x >= 0)
		printf("%d",x);
	else
	{
		hundred = x / 100;
		decade = (x / 10) % 10;
		unit = x % 10;

		if (hundred != 0)
			x_res = hundred * 1 + decade * 10 + unit * 100;
		else
			x_res = decade * 1 + unit * 10;
		
		printf("%d",x_res);
	}
}
