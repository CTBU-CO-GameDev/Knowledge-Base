#include "stdio.h"

struct Commodity
{
public:
	char commodity_name[20];
	char address[40];
	int buying_num;
	float unit_price;
	float payment_amount = unit_price * buying_num;
public:	
	Commodity(float unit):unit_price(unit){}
	
	void Print_Commodity_Info()
	{	
		printf("%s","��ȷ�϶�����Ϣ��\n");
		printf("��Ʒ���ƣ�%s\n",commodity_name);
		printf("��Ʒ���ۣ�%.2f��\n",unit_price);
		printf("����������%d\n",buying_num);
		printf("֧����%.2f��\n",payment_amount);
		printf("�ջ���ַ��%s\n",address);
	}
};

int main()
{
	Commodity commodity(4.98f);
	
	printf("��������Ʒ���ƣ�"); 
	scanf("%s",&commodity.commodity_name);
	getchar();
	printf("�����빺��������"); 
	scanf("%d",&commodity.buying_num);
	getchar();
	printf("�������ջ���ַ��"); 
	scanf("%s",&commodity.address);

	commodity.Print_Commodity_Info();
	
} 
