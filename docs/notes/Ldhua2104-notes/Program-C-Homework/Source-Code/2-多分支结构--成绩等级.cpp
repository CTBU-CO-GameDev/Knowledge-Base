#include "stdio.h"

void use_if(char grade)
{
	printf("������ʹ��ifʵ�֣�\n");
	if ( grade == 'A' )
		printf("�ٷ��Ƴɼ�����Ϊ��%s\n","[90,100]");
	else if (grade == 'B')
		printf("�ٷ��Ƴɼ�����Ϊ��%s\n","[80,89]");
	else if (grade == 'C')
		printf("�ٷ��Ƴɼ�����Ϊ��%s\n","[70,79]");
	else if (grade == 'D')
		printf("�ٷ��Ƴɼ�����Ϊ��%s\n","[60,69]");
	else
		printf("�ٷ��Ƴɼ�����Ϊ��%s\n","[0,59]");
}

void use_switch(char grade)
{
	printf("������ʹ��switchʵ�֣�\n");
	switch(grade)
	{
		case 'A':
			{
				printf("�ٷ��Ƴɼ�����Ϊ��%s\n","[90,100]");
				break;
			}
		case 'B':
			{
				printf("�ٷ��Ƴɼ�����Ϊ��%s\n","[80,89]");
				break;
			}		
		case 'C':
			{
				printf("�ٷ��Ƴɼ�����Ϊ��%s\n","[70,79]");
				break;
			}
		case 'D':
			{
				printf("�ٷ��Ƴɼ�����Ϊ��%s\n","[60,69]");
				break;
			}		
		case 'E':
			{
				printf("�ٷ��Ƴɼ�����Ϊ��%s\n","[0,59]");
				break;
			}	
	}
}

	
int main()
{
	char grade;
	
	printf("������ɼ��ȼ�(��д��ĸ)��");
	scanf("%c",&grade);
	
	use_if(grade);
	use_switch(grade);
} 
