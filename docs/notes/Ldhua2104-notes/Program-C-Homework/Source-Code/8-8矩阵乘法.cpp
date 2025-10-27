#include "stdio.h"

void matrix_mult(int (*A)[10],int (*B)[10],int (*C)[10],
				int A_col,int A_row,int B_col,int B_row); 

int main()
{
	int A[10][10];
	int B[10][10];
	int C[10][10];
	
	int A_col,A_row;
	int B_col,B_row;
	int i,j;
	
	for(i = 0;i < 4;i++)
		scanf("%d%d%d%d",&A_col,&A_row,&B_col,&B_row);
		
	matrix_mult(A,B,C,A_col,A_row,B_col,B_row);
	
	for(i = 0;i < A_col;i++)
	{
		for(j = 0;j < B_row;j++)
			printf("%d ",C[i][j]);
		printf("\n");
	}
}

void matrix_mult(int (*A)[10],int (*B)[10],int (*C)[10],
				int A_col,int A_row,int B_col,int B_row){
	int i , j , k;	
	for(i = 0;i < A_col;i++)
	{
		for(j = 0;j < B_row;j++)
		{
			C[i][j] = 0;
			for(k = 0;k < A_row;k++)
				C[i][j] += A[i][k] * B[k][j]; 
		}
	}
}
