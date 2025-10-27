#include "stdio.h"
#include "stdlib.h"
#include "time.h"

int* input_array(int* array, int& n);
int get_max(int* array, int size);
int get_min(int* array, int size);

int main()
{
	int n;
	int array[100];
	int* array_ptr = input_array(array, n);
	
	int& size = n;
	printf("这%d个数中最大值为：%d\n",n,get_max(array,size));
	printf("这%d个数中最小值为：%d\n",n,get_min(array,size));
}

int* input_array(int* array, int& n)
{	
	printf("请输入随机数的个数：");
	scanf("%d",&n);
	
	srand((unsigned)time(NULL));
	
	printf("生成的%d个范围在[0,100]的随机正整数为：\n",n);
	for(int i = 0; i < n ; i++)
	{
		array[i] = rand() % 100;
		printf("%d ",array[i]);
	}
	printf("\n"); 
	
	return array;
} 

int get_max(int* array,int size)
{
	int max = 0;
	for (int i = 0; i < size; i++)
	{
		if (max < array[i])
			max = array[i];
	}
	
	return max;
}

int get_min(int* array,int size)
{
	int min = array[0];
	for (int i = 0; i < size; i++)
	{
		if (min > array[i])
			min = array[i];
	}
	
	return min;
}
