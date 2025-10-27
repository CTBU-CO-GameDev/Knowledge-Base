#include "stdio.h"

struct Student
{
	int num;
	char name[10];
	int score[3];
};

void Get_aver(struct Student* stu,int n,int* aver)
{
	int i,j;
	int sum = 0;
	for( i = 0;i < 3;i++)
	{
		sum = 0;
		for(j = 0;j < n;j++)
			sum += stu[j].score[i];
		aver[i] = sum / 3;
	}
}

void Get_max(struct Student* stu,int n,int* max)
{
	int i,j;
	for( i = 0;i < 3;i++)
	{
		for(j = 0;j < n;j++)
		{
			if( max[i] <= stu[j].score[i])
				max[i] = stu[j].score[i];
		}
	}
}

int main()
{
	struct Student stu[10];
	int i,j,n;
	int max[3];
	int aver[3];
	scanf("%d",&n);
	
	for(i = 0;i < n;i++)
	{
		scanf("%d",&stu[i].num);
		scanf("%s",&stu[i].name);
		scanf("%d%d%d",&stu[i].score[0],&stu[i].score[1],&stu[i].score[2]);
	}
	
	Get_aver(stu,n,aver);
	Get_max(stu,n,max);
	
	for( i = 0;i < 3;i++)
		printf("%d %d\n",aver[i],max[i]);
} 
