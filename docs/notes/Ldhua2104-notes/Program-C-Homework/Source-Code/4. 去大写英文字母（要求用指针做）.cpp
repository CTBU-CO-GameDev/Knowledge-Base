#include <iostream>

int strlen(char* str);
void delCapitalLetter(char* ori_str,char* res_str);

int main()
{
	char ori_str[100];
	char res_str[100];
	gets(ori_str); 
	
	delCapitalLetter(ori_str,res_str);
	
	printf("%s",res_str);
}

int strlen(char* str)
{
	for(int i = 0;;i++)
	{
		if(str[i] == '\0')
			return i;
	}
}

void delCapitalLetter(char* ori_str,char* res_str)
{
	int index = 0;
	for(int i = 0;i < strlen(ori_str);i++)
	{
		if( !(ori_str[i] >= 65 && ori_str[i] <= 90) )
		{
			res_str[index] = ori_str[i];
			index++;
		}
	}
	res_str[index] = '\0';
}
