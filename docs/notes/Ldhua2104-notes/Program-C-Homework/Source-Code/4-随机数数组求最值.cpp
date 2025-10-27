#include "stdio.h"
#include "stdlib.h"
#include "time.h"

void ini_matrix(int matrix[][50],int col,int row);
void show_matrix(int matrix[][50],int col,int row);
int find_max(int matrix[][50],int* coor,int col,int row);

int main()
{
	int matrix[50][50];
	int coor[2];
	int col;
	int row;
	
	printf("col:");
	scanf("%d",&col);
	printf("row:");
	scanf("%d",&row);
	ini_matrix(matrix,col,row);
	show_matrix(matrix,col,row);
	printf("�þ������ֵΪ��%d\n",find_max(matrix,coor,col,row));
	printf("��Ԫ�ص��±�Ϊ:(%d,%d)",coor[0],coor[1]);
}

void ini_matrix(int matrix[][50],int col,int row)
{	
	srand((unsigned)time(NULL));
	
	for(int i = 0;i < col;i++)
	{
		for(int j = 0;j < row;j++)
			matrix[i][j] = rand() % 201;
	}
}

void show_matrix(int matrix[][50],int col,int row)
{
	printf("������ɵ�%d ��%d����Ϊ��\n",col,row);
	for(int i = 0;i < col;i++)
	{
		for(int j = 0;j < row;j++)
			printf("%d\t",matrix[i][j]);
		printf("\n");
	}
}

int find_max(int matrix[][50],int* coor,int col,int row)
{
	int result = 0;
	
	for(int i = 0;i < col;i++)
	{
		for(int j = 0;j < row;j++)
		{
			if (result < matrix[i][j])
			{
				result = matrix[i][j];
				coor[0] = i + 1;
				coor[1] = j + 1;
			}
		}				
	}
	
	return result;
}


