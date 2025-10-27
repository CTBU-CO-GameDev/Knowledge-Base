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
	printf("��%d���������ֵΪ��%d\n",n,get_max(array,size));
	printf("��%d��������СֵΪ��%d\n",n,get_min(array,size));
}

int* input_array(int* array, int& n)
{	
	printf("������������ĸ�����");
	scanf("%d",&n);
	
	srand((unsigned)time(NULL));
	
	printf("���ɵ�%d����Χ��[0,100]�����������Ϊ��\n",n);
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
