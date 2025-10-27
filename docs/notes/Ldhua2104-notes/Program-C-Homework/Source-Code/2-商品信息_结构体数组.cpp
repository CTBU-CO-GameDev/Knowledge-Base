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
		printf("%s","请确认订单信息：\n");
		printf("商品名称：%s\n",commodity_name);
		printf("商品编码：%d\n",commodity_code);
		printf("商品单价：%.2f￥\n",unit_price);
		printf("购买数量：%d\n",buying_num);
		printf("支付金额：%.2f￥\n",payment_amount);
		printf("收货地址：%s\n",address);
	}
};

int main()
{	
	Commodity commodities[4] = {13.20f,6.50f,9.41f,2.00f};
	
	for (int i = 0; i < 4 ; i++)
	{
	printf("请输入商品名称："); 
	scanf("%s",&commodities[i].commodity_name);
	getchar();
	printf("请输入商品编码："); 
	scanf("%d",&commodities[i].commodity_code);
	printf("请输入购买数量："); 
	scanf("%d",&commodities[i].buying_num);
	printf("请输入收货地址："); 
	scanf("%s",&commodities[i].address); 
 	}
 	
 	printf("\n");
 	
	for (int i = 0; i < 4 ; i++)
	{
		commodities[i].Print_Commodity_Info();
		printf("\n");
	}
	
} 
