#include "stdio.h"

int sum(int n)
{
	int num;
	int result = 0;
	
	for (int i = 1 ;i <= n ; i++)
	{
		num = 3 * i - 1;
		result += num;
	}
	
	return result;
}

int main()
{
	int n;
	scanf("%d",&n);
	
	printf("%d",sum(n));
	
	return 0;
} 
