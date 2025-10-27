#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "math.h"
#define MAX_SIZE 100

void initialize_array(int* arr, int& size);
void find_narcissistic_number(int* ori_arr, int* nar_arr, int& size, int& nar_num);
void print_nar_arr(int* nar_arr,int nar_num);

int main()
{
	int size;
	int nar_num;
	int ori_arr[MAX_SIZE];
	int nar_arr[MAX_SIZE];
	
	initialize_array(ori_arr,size);
	for(int i = 0;i < size; i++)
		printf("%d ",ori_arr[i]);
	printf("\n");
	find_narcissistic_number(ori_arr,nar_arr,size,nar_num);
	print_nar_arr(nar_arr,nar_num);
}

void initialize_array(int* arr,int& size)
{
	printf("请输入要产生的随机数的个数：");
	scanf("%d",&size);
	
	int* ptr = arr;
	
	srand((unsigned)time(NULL));
	
	for(int i = 0;i < size; i++)
	{
		*ptr = rand() % 901 + 100;
		ptr++; 
	}
}

void find_narcissistic_number(int* ori_arr, int* nar_arr, int& size, int& nar_num)
{
	int number = 0;
	int unit = 0;
	int decade = 0;
	int hundreds = 0;
	int* ptr = nar_arr;
	
	for(int i = 0;i < size; i++)
	{
		unit = (*(ori_arr + i) / 100) % 10;
		decade = (*(ori_arr + i) / 10) % 10;
		hundreds = *(ori_arr + i) % 10;
		
		number = pow(hundreds,3) +pow(decade,3)+pow(unit,3);
		if(number == *(ori_arr + i))
		{
			*ptr = *(ori_arr + i);
			ptr++;
			nar_num++;
		}		
	}
}

void print_nar_arr(int* nar_arr,int nar_num)
{
	if (nar_num == 0)
	{
		printf("生成的随机数中不包含水仙花数.");
	}
	else
	{
		printf("其中的水仙花数为：\n"); 
		for(int i = 0;i < nar_num; i++)
			printf("%d ",*(nar_arr + i));
	}
}
