#include "stdio.h"

struct Info
{
	char name[10];
	int phoneNumber;
};

void telsort(struct Info* info,unsigned int N);
int isBigger(char* str1,char* str2);
void swap_value(struct Info* x,struct Info* y);
int  strlen(char* str);

int main()
{
	int i , j;
	int N;
	scanf("%d",&N);
	
	struct Info info[10];
	for(i = 0;i < N;i++)
		scanf("%s%d",info[i].name,&info[i].phoneNumber);
		
	telsort(info,N);	
		
	for(i = 0;i < N;i++)
		printf("%~12s%~12d\n",info[i].name,info[i].phoneNumber);
} 

int isBigger(char* str1,char* str2)
{
	int m = strlen(str1);
	int n = strlen(str2);
	int size = m < n ? m : n;
	
	int i = 0;
	while(i < size - 1)
	{
		if((char)str1[i] > (char)str2[i])
			return 1;
		else if((char)str1[i] == (char)str2[i])
			i++;
		else
			return 0; 
	}
	
	if(m - n > 0)
		return 1;
	else
		return 0;
}

void telsort(struct Info* info,unsigned int size)
{
	int i,j;
	for (i = 0; i < size - 1; i++)		   
	{
		for (j = 0; j < size - 1 - i; j++) 
		{
			if (isBigger(info[j].name,info[j+1].name))
				swap_value(&info[j], &info[j + 1]);
		}
	}
}

int strlen(char* str)
{
	int i;
	for(i = 0;;i++)
	{
		if(str[i] == 0)
			return i;
	}
}

void swap_value(struct Info* x,struct Info* y)
{
	struct Info c = *x;
	*x = *y;
	*y = c;
}

