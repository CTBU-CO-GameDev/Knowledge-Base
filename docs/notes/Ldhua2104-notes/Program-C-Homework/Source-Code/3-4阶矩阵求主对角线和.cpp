#include "stdio.h"

int get_sum()
{
	int Fourth_order_matrix[4][4];
	int sum = 0;
	
	for (int a = 0; a < 4; a++)
	{
		for (int b = 0; b < 4; b++)
		{
			scanf("%d",&Fourth_order_matrix[a][b]);
		}
	}
	
	for (int a = 0; a < 4; a++)
	{
		for (int b = 0; b < 4; b++)
		{
			if (a == b)
				sum += Fourth_order_matrix[a][b];
		}
	}
	
	return sum;
}

int main()
{
	printf("%d",get_sum());	
}
