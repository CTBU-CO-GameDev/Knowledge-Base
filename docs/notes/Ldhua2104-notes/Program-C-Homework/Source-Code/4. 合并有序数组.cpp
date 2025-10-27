#include "stdio.h"
#include "stdlib.h"

int* inputInfo(int* m);
int* func(int* arr1,int* arr2,int m,int n);
void sort(int* arr,int size);

int main()
{
	int m , n;
	int i;
	int* arr1 = inputInfo(&m);
	int* arr2 = inputInfo(&n);
	
	int* arr  = func(arr1,arr2,m,n);
	int size = m + n;
	sort(arr,size);
	for(i = 0;i < size;i++)
		printf("%d ",arr[i]);
		
	free(arr1);
	free(arr2);
	free(arr);
}

int* inputInfo(int* m)
{
	int i;
	scanf("%d",m);
	int* arr = (int*)malloc(sizeof(int)*(*m));
	for(i = 0;i < *m;i++)
		scanf("%d",&arr[i]);
		
	return arr;
}

int* func(int* arr1,int* arr2,int m,int n)
{
	int i = 0;
	int size = m + n;
	int* arr = (int*)malloc(sizeof(int)*size);
	
	for(i = 0;i < m;i++)
		arr[i] = arr1[i];
	for(i = 0;i < n;i++)
		arr[i+m] = arr2[i];
		
	return arr;
}

void sort(int* arr,int size)
{
	int i , j;
	for(i = 0;i < size - 1;i++)
	{
		for(j = 0;j < size - i - 1;j++)
		{
			if( arr[j] > arr[j+1] )
			{
				int a = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = a;
			}
		}
	}
}
