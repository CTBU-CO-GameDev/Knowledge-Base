#include "stdio.h" 

void find_char(char* str,char chr,int* count,int* index);
int strlen(char* str);

int main()
{
	int count[100] = {0};
	int size;
	char chr;
	char str[100];
	scanf("%s",str);
	getchar();
	scanf("%c",&chr);
	
	find_char(str,chr,count,&size);
	
	if(count[0] != 0)
	{
		printf("%d\n",count[0]);
		for(int i = 1;i < size + 1;i++)
		{
			printf("%d ",count[i]);
		} 
	}
	else
	{
		printf("No match!");
	} 
}

void find_char(char* str,char chr,int* count,int* index)
{
	*index = 0;
	for(int i = 0;i < strlen(str);i++)
	{
		if(str[i] == chr)
		{
			count[0]++;
			(*index)++;
			count[*index] = i;
		}
	}
}

int strlen(char* str)
{
	for(int i = 0;;i++)
	{
		if(str[i] == '\0')
			return i;
	}
}
