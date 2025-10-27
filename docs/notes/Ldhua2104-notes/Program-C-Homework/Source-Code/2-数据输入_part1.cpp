#include "stdio.h"
#include "stdlib.h"
#define MAX_SIZE 100

void* input_Info(float* arr,unsigned& size);
float Get_Min(float* arr,unsigned size);
void output_Info(float* arr,unsigned size);

int main()
{
	float* arr = (float*)malloc(MAX_SIZE*4);
	unsigned size;
	void* ptr = input_Info(arr,size);
	
	output_Info(arr,size);
	
	free(arr);
}

void* input_Info(float* arr,unsigned& size)
{
	printf("请输入要输入的数据的个数：");
	scanf("%u",&size);
		
	FILE* f_ptr = NULL;
	f_ptr = fopen("data.txt","w+");
	
	if(!f_ptr)
	{
		printf("Open failed!\n");
		exit(0);
	}
	else
	{
		for(int i = 0;i < size;i++)
		{
			scanf("%f",&arr[i]);
			//printf("%.2f ",arr[i]);
			fprintf(f_ptr,"%.2f ",arr[i]);
			//fseek(f_ptr,0,SEEK_END);
		}
		
		fclose(f_ptr);
		return (void*)f_ptr;
	}
}

float Get_Min(float* arr,unsigned size)
{
	float min = arr[0];
	int index = 0;
	for(int i = 0;i < size;i++)
	{
		if (min >= arr[i])
		{
			min = arr[i];
			index = i;
		}
	}
	
	return min;
}

void output_Info(float* arr,unsigned size)
{
	int n;
	printf("n:");
	scanf("%d",&n);
	printf("该数组的前%d个元素为:\n",n);
	for(int i = 0;i < n;i++)
		printf("%f ",arr[i]);
	printf("\n");
	printf("该数组的最小值为：%.2f",Get_Min(arr,size));
}
