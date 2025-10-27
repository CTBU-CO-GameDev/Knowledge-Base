#include "stdio.h"
#include "stdlib.h"

void deal_arr(int (*arr)[10],int col,int row);
int find_min(int* arr,int* index,int size);

int main()
{
	int arr[10][10];
	int col ,row;
	int i , j;
	
	scanf("%d%d",&col,&row);
	for(i = 0;i < col;i++)
	{
		for(j = 0;j < row;j++)
			scanf("%d",&arr[i][j]);
	}

	deal_arr(arr,col,row);

	getchar();
}

void deal_arr(int (*arr)[10],int col,int row)
{
	/*
	int i , j;
	int index[2] = {0,0};  //col row
	int min_col = 0;
	int min_row = 0;
	for(i = 0;i < col;i++)
	{
		for(j = 0;j < row;j++)
		{
			if( min_col <= arr[i][j])
			{
				min_col = arr[i][j];
				index[1] = j;
			}
		}
	}
	*/
	int i, j, k;
	int arr_value[10];
	int min_col;
	int min_row;
	int* index = (int*)malloc(sizeof(int) * 2);
	index[0] = 0;
	index[1] = 0;
	for(i = 0;i < col;i++)
	{
		for(j = 0;j < row;j++)
			arr_value[j] = arr[i][j];
		min_col = find_min(arr_value,&index[0],row);
		
		for(k = 0;k < col;k++)
			arr_value[k] = arr[k][index[0]];
		min_row = find_min(arr_value,&index[1],col);

		if(min_col == min_row)
			printf("%d %d %d\n",min_col,index[0],index[1]);
	}
}

int find_min(int* arr,int* index,int size)
{
	int i;
	index = 0;
	int min = arr[0];
	for(i = 0;i < size;i++)
	{
		if(min <= arr[0])
		{
			min = arr[0];
			index++;
		}
	}

	return min;
}

