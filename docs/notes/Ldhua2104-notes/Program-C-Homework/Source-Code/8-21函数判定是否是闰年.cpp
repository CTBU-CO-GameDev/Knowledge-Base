#include "stdio.h"

int find_year(int* year);
bool is_leap_year(int year);

int main()
{
	int year[100];
	int index = 0;
	index = find_year(year);
	
	for(int i = 0;i < index;i++)
	{
		printf("%d ",year[i]);
		if( (i+1) %  6 == 0)
			printf("\n\n");
	}
}

int find_year(int* year)
{
	int m,n;
	int index = 0;
	scanf("%d%d",&m,&n);
	
	for(int i = m;i < n;i++)
	{
		if(is_leap_year(i))
		{
			year[index] = i;
			index++;
		}
	}
	
	return index;
}

bool is_leap_year(int year)
{
	bool a = (year % 4 == 0) && (year % 100 != 0);
	bool b = (year % 100 == 0) && (year % 400 == 0);
	
	return a || b;
}
