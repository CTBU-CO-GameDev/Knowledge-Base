#include "stdio.h"

int same_set(int a[],int b[],int len);
void sort(int a[],int len);

int main()
{
	int a[50];
	int b[50];
	int i , n;
	
	scanf("%d",&n);
	for(i = 0;i < n;i++)
		scanf("%d",&a[i]);
	
	for(i = 0;i < n;i++)
		scanf("%d",&b[i]);
		
	printf("%d",same_set(a,b,n));
	
	return 0;
}

void sort(int a[],int len)
{
	int i , j;
	for(i = 0;i < len -1;i++)
	{
		for(j = 0;j < len - i - 1;j++)
		{
			if( a[j] > a[j+1] )
			{
				int c  = a[j];
				a[j]   = a[j+1];
				a[j+1] = c;
			}
		}
	}
}

int same_set(int a[],int b[],int len)
{
	int i;
	int count = 0;
	sort(a,len);
	sort(b,len);
	
	for(i = 0;i < len;i++)
	{
		if( a[i] == b[i] )
			count++;
	}
	
	if(count == len)
		return 1;
	else
		return 0;
}
