#include "stdio.h"

struct Student
{
	int Id_num;
	char name[50];
	int age;
	int score[6];
	int points;
	
	int get_points()
	{
		points = 0;
		switch(1)
		{
			case 1:
			{
				if( score[0] >= 60)
					points += 4;
			}
			case 2:
			{
				if( score[1] >= 60)
					points += 3;
			}
			case 3:
			{
				if( score[2] >= 60)
					points += 4;
			}
			case 4:
			{
				if( score[3] >= 60)
					points += 3;
			}
			case 5:
			{
				if( score[0] >= 60)
					points += 3;
			}
			case 6:
			{
				if( score[0] >= 60)
					points += 3;
			}
		}
		return points;
	}
};

int main()
{
	struct Student stu;
	int sum;
	scanf("%d%s%d",&stu.Id_num,stu.name,&stu.age);
	for(int i = 0;i < 6;i++)
		scanf("%d",&stu.score[i]);
	
	for(int i = 0;i < 6;i++)
		sum += stu.score[i];
	
	printf("%d ",stu.Id_num);
	printf("%s ",stu.name);
	printf("%d\n",stu.age);
	printf("%d",stu.get_points());
}
