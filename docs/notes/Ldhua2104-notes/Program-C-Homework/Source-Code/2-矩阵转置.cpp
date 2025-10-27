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
	printf("���������Ľ�����");
	scanf("%d",&n);
	
	printf("������һ��%d�׾���\n",n);
	for(int i = 0;i < n;i++)
	{
		for(int j = 0;j < n;j++)
			scanf("%d",*(matrix + i) + j);
	}
}

void output_matrix(int (*matrix)[SIZE],int n)
{
	printf("ת�ú�Ľ��Ϊ��\n");
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
