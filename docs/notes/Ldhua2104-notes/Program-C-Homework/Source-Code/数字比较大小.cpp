#include "stdio.h"

int compare_value_2(int a ,int b)
{
	return (a < b) ? a : b ;
}

int compare_value_3(int a ,int b,int c)
{
	int x = (a < b) ? a : b;
	return (x < c ) ? x : c;
}

int main()
{
	int a , b, c;
	printf("a:");
	scanf("%d",&a);
	printf("b:");
	scanf("%d",&b);
	printf("c:");
	scanf("%d",&c);
	
	printf("%s%d\n","���ڽ���a,b�Ĵ�С�Ƚϣ����Ϊ��",compare_value_2(a,b));
	printf("%s%d\n","���ڽ���a,b,c�Ĵ�С�Ƚϣ����Ϊ��",compare_value_3(a,b,c));
}
