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
		printf("%d",rem[i]);
}

int main()
{
	int number;
	scanf("%d",&number);
	
	get_reverse_number(number);
	
} 
