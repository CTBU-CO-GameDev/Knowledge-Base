#include "stdio.h"
#define MAX_SIZE 100

void swap_value(int& x,int& y);
void res_arr(int* arr,int n);

int main()
{
	int n;
	int arr[MAX_SIZE];
	
	scanf("%d",&n);
	for(int i = 0;i < n;i++)
		scanf("%d",&arr[i]);
		
	res_arr(arr,n);
	
	for(int i = 0;i < n;i++)
		printf("%d ",arr[i]);
}

void swap_value(int& x,int& y)
{
	int z = 0 ;
	z = x;
	x = y;
	y = z;
}

void res_arr(int* arr,int n)
{
	for(int i = 0;i < n/2;i++)
		swap_value(arr[i],arr[n-i-1]);
}
