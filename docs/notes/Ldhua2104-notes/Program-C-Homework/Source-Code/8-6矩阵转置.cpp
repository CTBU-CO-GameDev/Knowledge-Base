#include "stdio.h"
#define N 3

void trans_matrix(int (*matrix)[N]);
void swap_value(int& x,int& y);
 
int main()
{
	int matrix[N][N];
	for(int i = 0;i < N;i++)
	{
		for(int j = 0;j < N;j++)
			scanf("%d",&matrix[i][j]);
	}
	
	trans_matrix(matrix);
	
	for(int i = 0;i < N;i++)
	{
		for(int j = 0;j < N;j++)
			printf("%d ",*(*(matrix + i) + j));
		printf("\n");
	}
}

void trans_matrix(int (*matrix)[N])
{
	for(int i = 0;i < N;i++)
	{
		for(int j = i+1;j < N;j++)
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
