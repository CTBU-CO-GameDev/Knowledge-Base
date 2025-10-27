#include "stdio.h"

void use_if(char grade)
{
	printf("现在是使用if实现：\n");
	if ( grade == 'A' )
		printf("百分制成绩区间为：%s\n","[90,100]");
	else if (grade == 'B')
		printf("百分制成绩区间为：%s\n","[80,89]");
	else if (grade == 'C')
		printf("百分制成绩区间为：%s\n","[70,79]");
	else if (grade == 'D')
		printf("百分制成绩区间为：%s\n","[60,69]");
	else
		printf("百分制成绩区间为：%s\n","[0,59]");
}

void use_switch(char grade)
{
	printf("现在是使用switch实现：\n");
	switch(grade)
	{
		case 'A':
			{
				printf("百分制成绩区间为：%s\n","[90,100]");
				break;
			}
		case 'B':
			{
				printf("百分制成绩区间为：%s\n","[80,89]");
				break;
			}		
		case 'C':
			{
				printf("百分制成绩区间为：%s\n","[70,79]");
				break;
			}
		case 'D':
			{
				printf("百分制成绩区间为：%s\n","[60,69]");
				break;
			}		
		case 'E':
			{
				printf("百分制成绩区间为：%s\n","[0,59]");
				break;
			}	
	}
}

	
int main()
{
	char grade;
	
	printf("请输入成绩等级(大写字母)：");
	scanf("%c",&grade);
	
	use_if(grade);
	use_switch(grade);
} 
