#include "stdio.h"
#define MAX_SIZE 100
#define SUBJECT 3

struct Student
{
	int num;
	int score[SUBJECT];
	char name[MAX_SIZE];
	
	void input_info()
	{
		scanf("%d",&num);
		scanf("%s",&name);
		for(int i = 0;i < SUBJECT;i++)
			scanf("%d",&score[i]);
	}
	
	int get_aver()
	{
		int sum = 0;
		
		for(int i = 0 ;i < SUBJECT;i++)
			sum += score[i];
			
		return sum / SUBJECT;
	}
	
	int get_max()
	{
		int max = 0;
		
		for(int i = 0 ;i < SUBJECT;i++)
		{
			if(max <= score[i])
				max = score[i];
		}
		
		return max;
	}
};

void input_stuinfo(Student* student,int& num);
void output_stuinfo(Student* student,int& num);

int main()
{
	int num;
	int aver_score[SUBJECT];
	int max_score[SUBJECT];
	Student student[MAX_SIZE];
	
	input_stuinfo(student,num);
	output_stuinfo(student,num);
}

void input_stuinfo(Student* student,int& num)
{
	scanf("%d",&num);
	for(int i = 0;i < num;i++)
		student[i].input_info();
}

void output_stuinfo(Student* student,int& num)
{
	for(int i = 0;i < num;i++)
		printf("aver=%d max=%d\n",student[i].get_aver(),student[i].get_max());
}

