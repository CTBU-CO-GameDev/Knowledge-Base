#include "stdio.h"

void print_triangular_array(int col, char chr);
int get_num(int col);

int main()
{
	int col;
	char chr;
	
	printf("col:");
	scanf("%d",&col);
	getchar(); 
	printf("chr:");
	scanf("%c",&chr);
	
	print_triangular_array(col, chr);
	printf("�ַ����ܸ���Ϊ��%d",get_num(col));
} 

void print_triangular_array(int col, char chr)
{
	char array[10][100];
	int count;
	int a = 0;
	
	for(int i = 0 ; i < 10 ;i++)
	{
		/*��ʼֵ��ֵΪ' '*/
		for(int j = 0 ; j < 100 ; j++)
			array[i][j] = ' ';
	}
	
	for(int i = col ; i >= 0 ; i--)
	{
		count = (2 * i) + 1;
		for (int j = 0; j < count; j++)
			array[i][j+a] = chr;
		a++;
	}
	
	for(int i = 0 ; i < 10 ;i++)
	{
		for(int j = 0 ; j < 100 ; j++)
		{
			printf("%c",array[i][j]);
		}
		printf("\n");
	}
}

int get_num(int col)
{
	int result = 0;
	
	for (int i = 1;i <= col+1;i++)
		result += ( i * 2 ) - 1;
		
		
	return result;
}
