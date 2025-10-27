#include "stdio.h"

int tmult_ok(int x , int y)
{
	/* check multiplication overflow */
	int p = x * y;
	/* 0 is overflow , 1 isn't overflow */  
	return !x || p/x == y;
}

int tadd_ok(int x ,int y)
{
	int s = x + y;
	/* check addition overflow */
	int pos_over = x > 0 && y > 0 && s <= 0;
	int neg_over = x < 0 && y < 0 && s >= 0;
	/* 0 is overflow , 1 isn't overflow */
	return !pos_over && !neg_over ;
}

void rectangle_area()
{
	int length, width;
	printf("%s","请输入长："); 
	scanf("%d",&length);
	printf("%s","请输入宽："); 
	scanf("%d", &width);
	
	bool whether_over = tmult_ok(length , width);
	
	if (whether_over)
		printf("%d\n",length*width);
	else
	{
		printf("%s\n","发生溢出，请重新输入：");
		rectangle_area();
	}
}
void rectangle_perimeter()
{
	int length, width;
	printf("%s","请输入长："); 
	scanf("%d",&length);
	printf("%s","请输入宽："); 
	scanf("%d", &width);
	
	bool add_over = !tadd_ok(length , width);
	if (add_over)
	{
		printf("%s\n","发生溢出，请重新输入：");
		rectangle_perimeter();
	}
	bool mult_over= !tmult_ok(length+width , 2);
	if (mult_over)
	{
		printf("%s\n","发生溢出，请重新输入：");
		rectangle_perimeter();
	}
	
	printf("%d\n",(length+width)*2);
}

int main()
{
	printf("%s\n","--计算面积--");
	rectangle_area(); 
	printf("%s\n","--计算周长--");
	rectangle_perimeter();
	
	return 0; 
}
