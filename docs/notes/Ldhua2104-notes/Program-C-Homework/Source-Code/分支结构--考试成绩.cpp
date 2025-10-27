#include "stdio.h"

void judge_grade(int grade)
{
	switch(grade)
	{
		case 0:
			{
				printf("0分，未通过！");
				break;
			}	
		case 1:
		case 2:
			{
				printf("不是0分，未通过！");
				break;
			}
		case 3:
		case 4:
			{
				printf("考试通过！");
				break;
			}
		case 5:
			{
				printf("满分通过！");
				break; 
			}
	}
}

int main()
{
	int grade;
	printf("请输入成绩：");
	scanf("%d",&grade);
	
	judge_grade(grade);
}
