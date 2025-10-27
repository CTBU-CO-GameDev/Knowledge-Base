#include "stdio.h"

void value(int x,int y,int* result);

int main()
{
	int x ,y;
	int result[2] = {0,0};
	scanf("%d%d",&x,&y);
	
	value(x,y,result);
	printf("%d %d",result[0],result[1]);
} 

void value(int x,int y,int* result)
{
	result[0] = x + y;
	result[1] = x * y;
}
