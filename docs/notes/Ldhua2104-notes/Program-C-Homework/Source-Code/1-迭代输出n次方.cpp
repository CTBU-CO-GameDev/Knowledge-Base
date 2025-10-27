#include "stdio.h"

int pow_1(int x,int y);
int pow_2(int x,int y,int result);

int main()
{
	int x,y;

	printf("x:");
	scanf("%d",&x);
	printf("y:");
	scanf("%d",&y);
	
	printf("循环实现%d的%d次方为：%d\n",x,y,pow_1(x,y));
	printf("迭代实现%d的%d次方为：%d",x,y,pow_2(x,y,x));
} 

int pow_1(int x,int y)
{	
	int result = x;
	
	for(int i = 1;i < y;i++)
		result *= x;
	
	return result;
}

int pow_2(int x,int y,int result)
{
	result *= x;
	y--;
	if (y != 1)
		pow_2(x,y,result);
	else
		return result;
}
