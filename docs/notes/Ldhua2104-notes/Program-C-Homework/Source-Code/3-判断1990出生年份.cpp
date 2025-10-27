#include "stdio.h"
#include "stdlib.h"

struct People
{
public:
	char name[20];
	char sex;
	int brith_year;
	
	static int number[3];
	// num[0]大于1990年的人数，num[1]男性人数，num[2]女性人数 
public:
	void Get_num()
	{
		if ( brith_year >= 1990)
			(number[0])++;
		if( sex == 'm')
			(number[1])++;
		else
			(number[2])++;
	}
};

int People::number[3] = {0,0,0}; 

void input_info(People* people,int& num);
void deal_info(People* people,int num);
void output_info(People* people);

int main()
{
	People* people = (People*)malloc(sizeof(People)*10);
	int num;
	
	input_info(people,num);
	deal_info(people,num);
	output_info(people); 
	
	free(people);
}

void input_info(People* people,int& num)
{
	printf("请输入人数：");
	scanf("%d",&num);
	
	for(int i = 0;i < num;i++)
	{
		printf("请输入第%d个人的姓名：",i+1);
		scanf("%s",&people[i].name);
		getchar();
		printf("请输入第%d个人的性别：",i+1);
		scanf("%s",&people[i].sex);
		getchar();
		printf("请输入第%d个人的出生年份：",i+1);
		scanf("%d",&people[i].brith_year);
	}
}

void deal_info(People* people,int num)
{
	for(int i = 0;i < num;i++)
		people[i].Get_num();
}

void output_info(People* people)
{
	printf("在1990年后出生的人数为：%d\n",People::number[0]);
	printf("总共有男性%d人，女性%d人",People::number[1],People::number[2]);
}
