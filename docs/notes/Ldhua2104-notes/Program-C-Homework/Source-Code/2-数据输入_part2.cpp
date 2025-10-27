#include "stdio.h"
#include "stdlib.h"
#define MAX_SIZE 100

void readFILE(float* arr,int& size); 
void Get_Min(float* arr,int size);

int main()
{
	float arr[MAX_SIZE];
	int size;
	
	readFILE(arr,size);
	Get_Min(arr,size);
}

void readFILE(float* arr,int& size)
{
	int i = 0;
	FILE* f_ptr = fopen("data.txt","r");
	
	if(f_ptr)
	{
		printf("请输入想要读取的个数：");
		scanf("%d",&size);
		
		while(1)
		{
			fscanf(f_ptr,"%f ",&arr[i]);
			i++;
			if (i == size)
				break;
		}
		
		fclose(f_ptr);
	}
}

void Get_Min(float* arr,int size)
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
	
	printf("该数组的最小值为：%f\n",min);
	printf("最小值的索引为：%d",index);
}
