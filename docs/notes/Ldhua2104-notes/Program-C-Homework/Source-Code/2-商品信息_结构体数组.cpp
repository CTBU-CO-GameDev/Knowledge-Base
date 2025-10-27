#include "stdio.h"

struct Commodity
{
public:
	char commodity_name[20];
	char address[40];
	int buying_num;
	int commodity_code;
	float unit_price;
	float payment_amount;
public:	
	Commodity(float unit):unit_price(unit){}
	
	void Print_Commodity_Info()
	{	
		payment_amount = unit_price * buying_num;
		printf("%s","��ȷ�϶�����Ϣ��\n");
		printf("��Ʒ���ƣ�%s\n",commodity_name);
		printf("��Ʒ���룺%d\n",commodity_code);
		printf("��Ʒ���ۣ�%.2f��\n",unit_price);
		printf("����������%d\n",buying_num);
		printf("֧����%.2f��\n",payment_amount);
		printf("�ջ���ַ��%s\n",address);
	}
};

int main()
{	
	Commodity commodities[4] = {13.20f,6.50f,9.41f,2.00f};
	
	for (int i = 0; i < 4 ; i++)
	{
	printf("��������Ʒ���ƣ�"); 
	scanf("%s",&commodities[i].commodity_name);
	getchar();
	printf("��������Ʒ���룺"); 
	scanf("%d",&commodities[i].commodity_code);
	printf("�����빺��������"); 
	scanf("%d",&commodities[i].buying_num);
	printf("�������ջ���ַ��"); 
	scanf("%s",&commodities[i].address); 
 	}
 	
 	printf("\n");
 	
	for (int i = 0; i < 4 ; i++)
	{
		commodities[i].Print_Commodity_Info();
		printf("\n");
	}
	
} 
