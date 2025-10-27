#include "stdio.h"

int main()
{
	float array[10] ={1.1f};
	float total = 0.0f;
	
	for (int i = 1; i <= 9; i++)
	{
		array[i-1] = array[0] * i;
	}
	
	array[9] = 10.10f;
	
	for (int i = 0; i < 10; i++)
	{
		total +=(array[i] * array[i]);
	}
	
	printf("%f",total);
} 
