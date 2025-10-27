#include "stdio.h"

void get_reverse_number(int number)
{
	int rem[10];
	int n = 0;
	
	for(int i = 0;number > 10;i++)
	{		
		rem[i] = number % 10;
		number /= 10;
		n++;
	}
	rem[n] = number % 10;
	
	for(int i = 0;i <= n ; i++)
	{
		printf("%d",rem[i]);
	}
}

int main()
{
	int number;
	scanf("%d",&number);
	
	bool condition = true;
	do
	{
		
		if (number < 0)
		{
			printf("error!\n");
			printf("please input right value again\n");
			scanf("%d",&number);
		}
		else
		{
			get_reverse_number(number);
			condition = false; 
		}
	}while(condition);
	
} 
