#include "stdio.h"
#include "string.h"

int length_str(char* str)
{
		int i = 0;
		for (;; i++)
		{
			if (str[i] == '\0')
				return i;
		}
} 

void check_user_name()
{
	printf("�������û�����");
	
	char user_name[16];
	scanf("%s",&user_name);
	
	if (strchr(user_name, '@'))
	{
		if (length_str(user_name) >= 8)
			printf("Right!");
		else
		{
			printf("�û�����������8λ\n");
			check_user_name();
		}	
	}
	else
		{
			printf("�û���Ӧ������ע��\n");
			check_user_name();
		}		
} 

int main()
{
	check_user_name();
}
