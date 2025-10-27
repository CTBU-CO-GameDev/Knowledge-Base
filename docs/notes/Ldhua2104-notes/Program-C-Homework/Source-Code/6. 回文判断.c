#include "stdio.h"

void Function(char str[],int len);
int  Strlen(char str[]);

int main()
{
	int i;
	char str[50];
	scanf("%s",str);
	
	Function(str,Strlen(str));
}

void Function(char str[],int len)
{
	int i;
	int condition = 1;
	for(i = 0;i < len;i++)
	{
		if(str[i] != str[len - i - 1])
		{
			printf("No");
			condition = 0;
			break;	
		}
	}
	
	if(condition)
		printf("Yes");
}

int  Strlen(char str[])
{
	int i;
	for(i = 0;;i++)
	{
		if(str[i] == 0)
			return i;
	}
}
