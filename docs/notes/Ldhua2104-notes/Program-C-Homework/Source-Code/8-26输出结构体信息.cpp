#include "stdio.h"

struct Student
{
	int Id;
	char name[10];
	int score[3];
};

void Output_info(Student* stu,int n);

int main()
{
	int n;
	scanf("%d",&n);
	Student stu[10];
	float aver_arr[3] = {0.0f,0.0f,0.0f};
	
	for(int i = 0;i < n;i++)
	{
		scanf("%d%s",&stu[i].Id,stu[i].name);
		scanf("%d%d%d",&stu[i].score[0],&stu[i].score[1],&stu[i].score[2]);
	}
	
	Output_info(stu,n); 
}

void Output_info(Student* stu,int n)
{
	for(int i = 0;i < n;i++)
	{
		printf("%d %s ",stu[i].Id,stu[i].name);
		printf("%d %d %d\n",stu[i].score[0],stu[i].score[1],stu[i].score[2]);
	}
		
}
