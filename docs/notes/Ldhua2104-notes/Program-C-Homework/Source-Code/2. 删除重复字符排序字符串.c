#include "stdio.h"
#include "stdlib.h"

#define MAX 100

char* deleteRepeatedChar(char* ori_str);
void bubble_sort(char* str,int size);

int strlen(char* str);
void swap_value(char* x, char* y);

int main()
{
	char ori_str[MAX];
	gets(ori_str);
	char* res_str = deleteRepeatedChar(ori_str);
	
	int size = strlen(res_str);
	if(size != 0)
	{
		bubble_sort(res_str,size);
		puts(res_str);
	}
	else
	{
		puts(res_str);
	}
	
	return 0;
}

char* deleteRepeatedChar(char* ori_str)
{
	int i , j , count;
	int repeated_index = 0;
	int res_index = 0; 
	int size = strlen(ori_str);
	char repeatedChar[MAX];
	char* res_str = (char*)malloc(MAX);
	
	for(i = 0;i < size ; i++)
	{
		count = 0;
		for(j = 0;j < strlen(repeatedChar);j++)
		{
			if(ori_str[i] == repeatedChar[j])
				count++;
			
			if(count == 1)
				break;
		}
		
		if(count == 0)
		{
			res_str[res_index] =  ori_str[i];
			res_index++;
			repeatedChar[repeated_index] = ori_str[i];
			repeated_index++;
		}
	}
	res_str[res_index] = '\0';
	return res_str;
}

void bubble_sort(char* str,int size)
{
	int i , j;
	for (i = 0; i < size - 1; i++)		   
	{
		for (j = 0; j < size - 1 - i; j++) 
		{
			if (str[j] > str[j + 1])
				swap_value(&str[j], &str[j + 1]);
		}
	}
}

int strlen(char* str)
{
	int i;
	for(i = 0;;i++)
	{
		if(str[i] == '\0')
			return i;
	}
}

void swap_value(char* x, char* y)
{
	char c = *x;
	*x = *y;
	*y = c;
} 
