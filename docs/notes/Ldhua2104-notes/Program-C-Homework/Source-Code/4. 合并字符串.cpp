#include "stdio.h"
#include "stdlib.h"

int length(char* str);

char* func(char* str1,char* str2,int m,int n);
void sort(char* str,int size);

int main()
{
	int m , n;
	int i;
	char str1[20];
	char str2[20];
	
	scanf("%s",str1);
	scanf("%s",str2);
	m = length(str1);
	n = length(str2);
	
	char* str  = func(str1,str2,m,n);
	int size = m + n;
	sort(str,size);
	printf("%s",str);
		
	free(str);
}

int length(char* str)
{
	int i;
	for(i=0;;i++)
	{
		if(str[i] == 0)
			return i;
	}
}

char* func(char* str1,char* str2,int m,int n)
{
	int i = 0;
	int size = m + n + 1;
	char* str = (char*)malloc(sizeof(char)*size);
	
	for(i = 0;i < m;i++)
		str[i] = str1[i];
	for(i = 0;i < n;i++)
		str[i+m] = str2[i];
	
	str[size-1] = 0;	
	return str;
}

void sort(char* str,int size)
{
	int i , j;
	for(i = 0;i < size - 1;i++)
	{
		for(j = 0;j < size - i - 1;j++)
		{
			if( str[j] > str[j+1] )
			{
				char a = str[j];
				str[j] = str[j+1];
				str[j+1] = a;
			}
		}
	}
}
