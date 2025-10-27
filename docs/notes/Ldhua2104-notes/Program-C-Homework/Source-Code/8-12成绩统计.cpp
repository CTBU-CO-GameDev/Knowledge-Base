#include "stdio.h"

struct Student
{
	int Id;
	char name[10];
	int score[3];
	
	float Get_aver()
	{
		int sum = 0;
		for(int i = 0;i < 3;i++)
			sum += score[i];
			
		return (float)sum / 3;
	}
};

void Get_aver(Student* stu,int n,float* aver_arr);
void Output_info(Student* stu,int n,float* aver_arr);

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
	
	Get_aver(stu,n,aver_arr);
	Output_info(stu,n,aver_arr); 
}

void Get_aver(Student* stu,int n,float* aver_arr)
{
	float sum = 0.0f;
	for(int i = 0;i < 3;i++)
	{
		sum = 0.0f;
		for(int j = 0;j < n;j++)
			sum += stu[j].score[i]; 
		aver_arr[i] = sum / n;
	}
}

void Output_info(Student* stu,int n,float* aver_arr)
{
	for(int i = 0;i < n;i++)
	{
		printf("%d %s ",stu[i].Id,stu[i].name);
		printf("%.2f\n",stu[i].Get_aver());
	}
	printf("%.2f %.2f %.2f",aver_arr[0],aver_arr[1],aver_arr[2]);
}
