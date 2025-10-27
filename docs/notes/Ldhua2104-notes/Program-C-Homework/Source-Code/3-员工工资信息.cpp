#include <iostream>

struct Employee_info
{
public:
	int employee_num;
	int salary;
	char sex[2];
	char name[10];
};

void input_info(Employee_info* employee, int num);
float get_sum_salary(Employee_info* employee, int num);

int main()
{
	int num;
	printf("������Ա������Ϊ:");
	scanf("%d",&num);
	
	Employee_info employee[10];
	input_info(employee,num);
	printf("\n");
	printf("����Ա����������Ϊ��%.2f��",get_sum_salary(employee,num));
	
}

void input_info(Employee_info* employee, int num)
{
	for (int i = 0; i < num ;i++)
	{
		printf("������Ա����ţ�");
		scanf("%d",&employee[i].employee_num);
		getchar();
		printf("������Ա��������");
		scanf("%s",&employee[i].name);
		getchar();
		printf("������Ա���Ա�");
		scanf("%c",&employee[i].sex);
		getchar();
		printf("������Ա�����ʣ�");
		scanf("%d",&employee[i].salary);
	}
}

float get_sum_salary(Employee_info* employee, int num)
{
	float result = 0;
	for (int i = 0; i < num ;i++)
		result += (float)employee[i].salary;
		
	return result;
}
