#include "stdio.h"
#define SIZE 10

void input_matrix(int (*matrix)[SIZE],int& n);
void trans_matrix(int (*matrix)[SIZE],int n);
void output_matrix(int (*matrix)[SIZE],int n);
void swap_value(int& x,int& y);

int main()
{
	int n;
	int matrix[SIZE][SIZE];
	
	input_matrix(matrix,n);
	trans_matrix(matrix,n);
	output_matrix(matrix,n);
}

void input_matrix(int (*matrix)[SIZE],int& n)
{
	printf("请输入矩阵的阶数：");
	scanf("%d",&n);
	
	printf("请输入一个%d阶矩阵：\n",n);
	for(int i = 0;i < n;i++)
	{
		for(int j = 0;j < n;j++)
			scanf("%d",*(matrix + i) + j);
	}
}

void output_matrix(int (*matrix)[SIZE],int n)
{
	printf("转置后的结果为：\n");
	for(int i = 0;i < n;i++)
	{
		for(int j = 0;j < n;j++)
			printf("%d ",*(*(matrix + i) + j));
		printf("\n");
	}
}

void trans_matrix(int (*matrix)[SIZE],int n)
{
	for(int i = 0;i < n;i++)
	{
		for(int j = i+1;j < n;j++)
			swap_value(*(*(matrix + i)+j),*(*(matrix + j)+i));
	}
}

void swap_value(int& x,int& y)
{
	int z = 0;
	z = y;
	y = x;
	x = z;
}
