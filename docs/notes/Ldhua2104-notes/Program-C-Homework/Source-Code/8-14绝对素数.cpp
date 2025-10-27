#include "stdio.h"

int get_reverse_number(int x);
int find_prime(int* pri_arr);
int isPrime(int x);
int absolute(int x);

int main()
{
	int pri_arr[100];
	int size;
	size = find_prime(pri_arr);

	for (int i = 0; i < size; i++)
	{
		if (isPrime(get_reverse_number(pri_arr[i])))
		{
			if (absolute(pri_arr[i]))
				printf("%d\n", pri_arr[i]);
		}
	}
}

int get_reverse_number(int x)
{
	int unit, decade, hundred;
	int x_res = 0;
	hundred = x / 100;
	decade = (x / 10) % 10;
	unit = x % 10;

	if (hundred != 0)
		x_res = hundred * 1 + decade * 10 + unit * 100;
	else
		x_res = decade * 1 + unit * 10;

	return x_res;
}

int find_prime(int* pri_arr)
{
	int m, n;
	int size = 0;
	scanf("%d%d", &m, &n);

	for (int i = m; i < n; i++)
	{
		if (isPrime(i))
		{
			pri_arr[size] = i;
			size++;
		}
	}

	return size;
}

int isPrime(int x)
{
	int i;

	for (i = 2; i < x; i++)
	{
		if (x % i == 0)
			break;
	}

	if (i < x)
		return 0;
	else
		return 1;
}

int absolute(int x)
{
	int unit, decade, hundred;
	hundred = x / 100;
	decade = (x / 10) % 10;
	unit = x % 10;

	if (unit != decade && unit != hundred && hundred != decade)
		return 1;
}
