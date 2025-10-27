#include "stdio.h"
#include "stdlib.h"
#include "time.h"

void change_postion(int* array,int* buffer_array,int size); 

int main()
{
	int buffer_array[50];
	int ran_array[50];
	int size;
	
	printf("请输入随机数的个数(0,50]：");
	scanf("%d",&size);
	
	srand((unsigned)time(NULL));
	
	printf("生成的%d个范围在[0,200]的随机正整数为：\n",size);
	for(int i = 0;i < size;i++)
	{
		ran_array[i] = rand() % 201;
		/* 生成范围在[0,200]的随机整数 */
		printf("%d ",ran_array[i]);
	}
	printf("\n");
	
	change_postion(ran_array,buffer_array, size);
	
	for(int i = 0;i < size;i++)
		printf("%d ",buffer_array[i]);
} 

void change_postion(int* ran_array,int* buffer_array, int size)
{
	int m;               		//第m个数的索引为m-1 
	printf("请输入想要改变的个数:");
	scanf("%d",&m);
	
	for(int i = 0;i < m;i++)
		buffer_array[i] = ran_array[size- m + i];
	for(int i = 0;i < (size - m);i++)
		buffer_array[m + i] = ran_array[i];
}
