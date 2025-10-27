#include "stdio.h"

void Case_reversal(char* ori_str)
{
		for(;*ori_str != '\0';ori_str++)
	{
		if  (*ori_str >= 'A' && *ori_str <= 'Z')
			*ori_str += 32;
		else if (*ori_str >= 'a' && *ori_str <= 'z')
			*ori_str -= 32;
		else
			continue;
	}
}

int main()
{
	char ori_str[10];
	scanf("%s",&ori_str);
	
	Case_reversal(ori_str); 
	printf("%s",ori_str);
}
