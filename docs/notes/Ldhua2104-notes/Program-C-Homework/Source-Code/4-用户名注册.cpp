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
	printf("请输入用户名：");
	
	char user_name[16];
	scanf("%s",&user_name);
	
	if (strchr(user_name, '@'))
	{
		if (length_str(user_name) >= 8)
			printf("Right!");
		else
		{
			printf("用户名不得少于8位\n");
			check_user_name();
		}	
	}
	else
		{
			printf("用户名应以邮箱注册\n");
			check_user_name();
		}		
} 

int main()
{
	check_user_name();
}
