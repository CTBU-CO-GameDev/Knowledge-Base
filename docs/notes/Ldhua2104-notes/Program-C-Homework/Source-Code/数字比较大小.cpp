#include "stdio.h"

int compare_value_2(int a ,int b)
{
	return (a < b) ? a : b ;
}

int compare_value_3(int a ,int b,int c)
{
	int x = (a < b) ? a : b;
	return (x < c ) ? x : c;
}

int main()
{
	int a , b, c;
	printf("a:");
	scanf("%d",&a);
	printf("b:");
	scanf("%d",&b);
	printf("c:");
	scanf("%d",&c);
	
	printf("%s%d\n","现在进行a,b的大小比较，结果为：",compare_value_2(a,b));
	printf("%s%d\n","现在进行a,b,c的大小比较，结果为：",compare_value_3(a,b,c));
}
