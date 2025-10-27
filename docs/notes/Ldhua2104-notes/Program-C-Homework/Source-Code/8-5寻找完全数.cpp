#include "stdio.h"

int find_proper_divisors(int m);
int is_proper_divisors(int x);

int main()
{
	int m;
	scanf("%d", &m);

	printf("%d", find_proper_divisors(m));
}

int find_proper_divisors(int m)
{
	for (int i = m;;i--)
	{
		if (is_proper_divisors(i))
			return i;
	}
}

int is_proper_divisors(int x)
{
	int sum = 0;
	int index = 0;
	int num[1000];

	for (int i = 1; i <= x; i++)
	{
		if (x % i == 0)
		{
			num[index] = i;
			index++;
			num[index] = x / i;
			index++;
		}
	}

	for (int i = 0; i < index ; i++)
		sum += num[i];
	sum /= 2;
	if (sum - x == x)
		return 1;
	else
		return 0;
}

