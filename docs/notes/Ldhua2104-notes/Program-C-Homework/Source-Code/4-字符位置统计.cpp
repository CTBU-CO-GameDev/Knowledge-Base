#include "stdio.h"

void print_char(char* str,char wanted_char)
{
	int size = 0;
	int count = 0;
	int pos[10];
	int* pos_ptr = pos;
	char* char_ptr = str;
	
	for(int i = 0;*char_ptr != '\0';char_ptr++)
	{
		if (*char_ptr == wanted_char)
		{
			count++;
			*pos_ptr = i;
			pos_ptr++;
			size++;
		}
		i++;	
	}
	
	if (count)
	{
		printf("%d\n",count); 
		for(int i = 0;i < size;i++)
			printf("%d#",pos[i]);
	}
	else
	{
		printf("No match!"); 
	}
}

int main()
{
	char wanted_char;
	char str[100];
	scanf("%s",str);
	scanf("%c",&wanted_char);
	
	print_char(str,wanted_char);	
}
