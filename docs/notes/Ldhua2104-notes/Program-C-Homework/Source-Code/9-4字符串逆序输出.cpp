#include "stdio.h"

void reverseString(char* str);
int strlen(char* str);
void swap_value(char* x, char* y);

int main()
{
	char string[50];
	scanf("%s",string);
	
	reverseString(string);
	
	printf("%s",string);
}

void reverseString(char* string)
{
	int i;
	int size = strlen(string);
	for(i = 0;i < size/2;i++)
	{
		swap_value(&string[i],&string[size - i - 1]);	
	}
}

int strlen(char* str)
{
	int i;
	for(i=0;;i++)
	{
		if(str[i] == '\0')
		{
			return i;
		}
	}
}

void swap_value(char* x, char* y)
{
	char c = *x;
	*x = *y;
	*y = c;
}
