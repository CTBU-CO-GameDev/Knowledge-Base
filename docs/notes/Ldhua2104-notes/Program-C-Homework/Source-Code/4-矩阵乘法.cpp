#include "stdio.h"
#include "stdlib.h"

void input_matrix(int (*martix)[10],int& col,int& row);
void matrix_mult(int (*A)[10],int (*B)[10],int (*C)[10],int A_col,int A_row,int B_col,int B_row);
void output_matrix(int (*matrix)[10],int& col,int& row);

int main()
{
	int A[10][10];
	int B[10][10];
	int C[10][10];

	int A_col,A_row;
	int B_col,B_row;

	do
	{
		input_matrix(A,A_col,A_row);
		input_matrix(B,B_col,B_row);
		
		if(A_row != B_col)
			printf("违反矩阵乘法定义，请重新输入...\n");
		else
			break;
	}while(1);
	
	matrix_mult(A,B,C,A_col,A_row,B_col,B_row);
	output_matrix(C,A_col,B_row);
}

void input_matrix(int (*matrix)[10],int& col,int& row)
{
	printf("col:");
	scanf("%d",&col);
	printf("row:");
	scanf("%d",&row);
	
	for(int i = 0;i < col;i++)
	{
		for(int j = 0;j < row;j++)
			scanf("%d",&matrix[i][j]);
	}
}

void matrix_mult(int (*A)[10],int (*B)[10],int (*C)[10],int A_col,int A_row,int B_col,int B_row)
{	
	for(int i = 0;i < A_col;i++)
	{
		for(int j = 0;j < B_row;j++)
		{
			C[i][j] = 0;
			for(int k = 0;k < A_row;k++)
				C[i][j] += A[i][k] * B[k][j]; 
		}
	}
}

void output_matrix(int (*matrix)[10],int& col,int& row)
{
	for(int i = 0;i < col;i++)
	{
		for(int j = 0;j < row;j++)
			printf("%d ",matrix[i][j]);
		printf("\n");
	}
}
