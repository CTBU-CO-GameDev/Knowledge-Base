#include "stdio.h"
#include "stdlib.h"
#include "time.h"

void change_postion(int* array,int* buffer_array,int size); 

int main()
{
	int buffer_array[50];
	int ran_array[50];
	int size;
	
	printf("������������ĸ���(0,50]��");
	scanf("%d",&size);
	
	srand((unsigned)time(NULL));
	
	printf("���ɵ�%d����Χ��[0,200]�����������Ϊ��\n",size);
	for(int i = 0;i < size;i++)
	{
		ran_array[i] = rand() % 201;
		/* ���ɷ�Χ��[0,200]��������� */
		printf("%d ",ran_array[i]);
	}
	printf("\n");
	
	change_postion(ran_array,buffer_array, size);
	
	for(int i = 0;i < size;i++)
		printf("%d ",buffer_array[i]);
} 

void change_postion(int* ran_array,int* buffer_array, int size)
{
	int m;               		//��m����������Ϊm-1 
	printf("��������Ҫ�ı�ĸ���:");
	scanf("%d",&m);
	
	for(int i = 0;i < m;i++)
		buffer_array[i] = ran_array[size- m + i];
	for(int i = 0;i < (size - m);i++)
		buffer_array[m + i] = ran_array[i];
}
