#include "stdio.h" 
#define MAX_SIZE 100

int find_prime(int* pri_arr);
int isPrime(int x);

int main()
{
	int pri_arr[MAX_SIZE];
	int size;
	
	size = find_prime(pri_arr);
	
	for(int i = 0; i < size;i++)
	{
		printf("%d ",pri_arr[i]);
		if( (i+1) %  8 == 0)
			printf("\n\n");
	}
}

int find_prime(int* pri_arr)
{
	int m , n;
	int index = 0;
	scanf("%d%d",&m,&n);
	
	for(int i = m;i < n;i++)
	{
		if( isPrime(i) )
		{
			*(pri_arr + index) = i;
			index++;
		}
	}
	
	return index;
}

int isPrime(int x)
{
	int i;
	
	for(i = 2;i < x;i++)
	{
		if( x % i == 0)
			break;
	}
	
	if( i < x )
		return 0;
	else
		return 1;
}
