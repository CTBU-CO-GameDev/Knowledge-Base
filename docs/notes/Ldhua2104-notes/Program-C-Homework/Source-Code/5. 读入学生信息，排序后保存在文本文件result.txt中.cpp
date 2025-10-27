#include "stdio.h"

struct Student
{
	char name[10];
	int  English;
	int  Math;
	int  Program;
}; 

int main()
{
	int i;
	int total[4] = {0,0,0,0};
	struct Student stu[4];
	for(i = 0;i < 4;i++)
	{
		scanf("%s%d%d%d",stu[i].name, &stu[i].English , &stu[i].Math , &stu[i].Program);
		total[i] = stu[i].English + stu[i].Math + stu[i].Program;
	}
	
	FILE* ptr = fopen("result.txt","w");
	fprintf(ptr,"Name    English     Math       C        Total\n");
	for(i = 0;i < 4;i++)
		fprintf(ptr,"%s    %d    %d    %d    %d\n",
				stu[i].name,stu[i].English,stu[i].Math,stu[i].Program,total[i]);

	fclose(ptr);
}
