#include "stdio.h"

int Max_in_array(int* array)
{
	int max_num = 0;
	for(int i = 0;i < 10 ; i++)
	{
		if (max_num <= array[i])
			max_num = array[i];
	}
	return max_num;
}

int main()
{
	int n;
	int array[10]; 
	scanf("%d",&n);
	
	for(int i = 0;i < n; i++)
	{
		scanf("%d",&array[i]);
	}
	
	printf("%d",Max_in_array(array));
}
