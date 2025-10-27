#include "stdio.h"

void value(int* a,int* b,int* result);

int main()
{
	int a;
	int* ptr_a = &a;
	int b;
	int* ptr_b = &b;
	int result[2];
	
	scanf("%d",&a);
	scanf("%d",&b);
	
	value(ptr_a,ptr_b,result);
	printf("%d ",result[0]);
	printf("%d",result[1]);
} 

void value(int* ptr_a,int* ptr_b,int* result)
{
	result[0] = *ptr_a + *ptr_b;
	result[1] = (*ptr_a) * (*ptr_b);
}
