#include "stdio.h"
#include "stdlib.h"

struct People
{
public:
	char name[20];
	char sex;
	int brith_year;
	
	static int number[3];
	// num[0]����1990���������num[1]����������num[2]Ů������ 
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
	printf("������������");
	scanf("%d",&num);
	
	for(int i = 0;i < num;i++)
	{
		printf("�������%d���˵�������",i+1);
		scanf("%s",&people[i].name);
		getchar();
		printf("�������%d���˵��Ա�",i+1);
		scanf("%s",&people[i].sex);
		getchar();
		printf("�������%d���˵ĳ�����ݣ�",i+1);
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
	printf("��1990������������Ϊ��%d\n",People::number[0]);
	printf("�ܹ�������%d�ˣ�Ů��%d��",People::number[1],People::number[2]);
}
