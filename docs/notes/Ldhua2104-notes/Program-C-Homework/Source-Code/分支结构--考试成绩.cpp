#include "stdio.h"

void judge_grade(int grade)
{
	switch(grade)
	{
		case 0:
			{
				printf("0�֣�δͨ����");
				break;
			}	
		case 1:
		case 2:
			{
				printf("����0�֣�δͨ����");
				break;
			}
		case 3:
		case 4:
			{
				printf("����ͨ����");
				break;
			}
		case 5:
			{
				printf("����ͨ����");
				break; 
			}
	}
}

int main()
{
	int grade;
	printf("������ɼ���");
	scanf("%d",&grade);
	
	judge_grade(grade);
}
