#include "stdio.h"

void del(char* str,char* del_str);
int len(char* str);

int main()
{
	char str[50];
	char del_str[50];
	scanf("%s",str);
	
	del(str,del_str);
	printf("%s",del_str);
} 

void del(char* str,char* del_str)
{
	int i , n;
	int index = 0;
	scanf("%d%d",&i,&n);
	
	for(int j = 0;j < len(str);j++)
	{
		if( !(j >= i-1 && j <= i+n-2) )
		{
			del_str[index] = str[j];
			index++;
		}
	}
	del_str[index] = '\0';
}

int len(char* str)   //²»°üº¬'\0' 
{
	for(int i = 0;;i++)
	{
		if( str[i] == '\0')
			return i;
	}
}
