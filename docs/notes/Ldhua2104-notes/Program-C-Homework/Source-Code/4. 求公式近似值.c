#include "stdio.h"

double GetPowE(double x, int n);

int main()
{
	int n;
	double x;

	scanf("%lf", &x);
	scanf("%d", &n);

	printf("%.6f", GetPowE(x, n));
}

double GetPowE(double x, int n)
{
	int i, j;
	double an;
	double result = 1;
	for (i = 0; i < n; i++)
	{
		an = 1;
		for (j = 1; j <= i+1; j++)
			an *= x / j;

		result += an;
	}

	return result;
}
