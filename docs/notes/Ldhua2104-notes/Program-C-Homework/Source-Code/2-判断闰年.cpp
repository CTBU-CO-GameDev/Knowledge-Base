#include "stdio.h"

bool nor_isLeapYear(int year);
bool ptr_isLeapYear(int* year); 

int main()
{
	int year;
	scanf("%d",&year);
	
	if (nor_isLeapYear(year) || ptr_isLeapYear(&year))
		printf("Yes");
	else
		printf("No");
} 

bool nor_isLeapYear(int year)
{
	bool condition_1 = (year % 4 == 0) && (year % 100 != 0);
	bool condition_2 = (year % 100 == 0) && (year % 400 == 0);
	
	return condition_1 || condition_2;
}

bool ptr_isLeapYear(int* year)
{
	bool condition_1 = (*year % 4 == 0) && (*year % 100 != 0);
	bool condition_2 = (*year % 100 == 0) && (*year % 400 == 0);
	
	return condition_1 || condition_2;	
}
