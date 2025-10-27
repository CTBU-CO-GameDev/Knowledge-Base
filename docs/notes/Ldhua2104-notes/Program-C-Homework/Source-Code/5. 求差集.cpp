#include "stdio.h"

int input(int* arr);
int isArr(int x,int size,int* arr);

int main()
{
	int A[100];
	int B[100];
	int i = 0, j = 0;
	int m , n;
	
	m = input(A);
	n = input(B);
	
	for(i = 0;i < m;i++)
	{
		if(!isArr(A[i],n,B))
			printf("%d ",A[i]);
	}
}

int input(int* arr)
{
	int i = 0;
	do
	{
		scanf("%d",&arr[i]);
		i++;
	}
	while(getchar() != '\n');
	
	return i;
}

int isArr(int x,int size,int* arr)
{
	int i;
	for(i = 0;i < size;i++)
	{
		if(x == arr[i])
			return 1;
	}
	
	return 0;
}
