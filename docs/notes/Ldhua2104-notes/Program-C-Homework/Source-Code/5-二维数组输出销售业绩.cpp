#include "stdio.h"

void input_sale_performence(int sale_performence[][10], int row_employees,int line_goods);
int best_saler(int sale_performence[][10], int row_employees,int line_goods);
char popular_good(int sale_performence[][10], int row_employees,int line_goods);

int main()
{
	int line_goods;  		 //列 
	int row_employees;		 //行 
	
	printf("请输入销售人员数:");
	scanf("%d",&row_employees);
	printf("请输入商品种数:");
	scanf("%d",&line_goods);
	
	int sale_performence[10][10];
	/*
			销售业绩	
			A	B	C    
		1
	 	2
	 	3
	*/
	
	input_sale_performence(sale_performence,row_employees,line_goods);
	printf("最佳销售人员是%d\n",best_saler(sale_performence,row_employees,line_goods));
	printf("最受欢迎的商品是%c",popular_good(sale_performence,row_employees,line_goods));    
}
 
 void input_sale_performence(int sale_performence[][10], int row_employees,int line_goods)
 {
 	int emp_name = 1;
 	for(int i = 0 ; i < row_employees; i++)
 	{
 		char good_name = 'A';
 		for(int j = 0;j < line_goods; j++)
 		{
 			printf("销售人员%d销售商品%c的销售额为:",emp_name,good_name);
 			scanf("%d",&sale_performence[i][j]);
 			
			good_name++;
		}
		emp_name++;
	}
 }

int best_saler(int sale_performence[][10], int row_employees,int line_goods)
{
	int name = 0;
	int result = 0;
	int sum[10] = {0,0,0,0,0,0,0,0,0,0};
	int& num_emp = row_employees;
	 
	for(int i = 0 ; i < row_employees; i++)
	{
		for(int j = 0 ; j < line_goods ; j++)
		{
			sum[i] += sale_performence[i][j];
		}
	}
	
	int index = 0;
	for(int i = 1;i <= num_emp ;i++)
	{
		
		if (result < sum[i-1])
		{
			result = sum[i-1];
			name = index + 1;
		}
		index++;
	}
	
	return name;
}

char popular_good(int sale_performence[][10], int row_employees,int line_goods)
{	
	int sum[10] = {0,0,0,0,0,0,0,0,0,0};
	int result = 0;
	char name = 'A';
	 
	for(int i = 0; i < row_employees;i++)
	{
		for(int j = 0 ;j < line_goods;j++)
			sum[i] = sale_performence[j][i];
	}
	
	int index = 0;
	for(int i = 0;i < line_goods ;i++)
	{
		if (result < sum[i])
			result = sum[i];
		index++;
	}
	
	name += (index-1) ;
	
	return name;
}
 
 
 
 
 
 
