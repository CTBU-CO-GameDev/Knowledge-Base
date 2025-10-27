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
	printf("请输入员工人数为:");
	scanf("%d",&num);
	
	Employee_info employee[10];
	input_info(employee,num);
	printf("\n");
	printf("所有员工工资总数为：%.2f￥",get_sum_salary(employee,num));
	
}

void input_info(Employee_info* employee, int num)
{
	for (int i = 0; i < num ;i++)
	{
		printf("请输入员工编号：");
		scanf("%d",&employee[i].employee_num);
		getchar();
		printf("请输入员工姓名：");
		scanf("%s",&employee[i].name);
		getchar();
		printf("请输入员工性别：");
		scanf("%c",&employee[i].sex);
		getchar();
		printf("请输入员工工资：");
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
