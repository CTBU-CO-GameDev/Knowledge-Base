#include "stdio.h"

int length(char* m)
{
	for(int i = 0;;i++)
	{	
		if (m[i] == '\0')
		{
			i++;
			return i;
		}
	}
}

void get_reverse_number()
{
	char m[10];
	scanf("%s",&m);
	
	if (m[0] == '-')
	{
		printf("error!");
		get_reverse_number();
	}
	else
	{
		for(int i = length(m)-1;i>=0;i--)
		{
			printf("%c",m[i]);
		}
	}
}

int main()
{
	get_reverse_number();
}
