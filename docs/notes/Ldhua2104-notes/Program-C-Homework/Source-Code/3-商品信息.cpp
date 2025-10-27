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
		printf("%s","请确认订单信息：\n");
		printf("商品名称：%s\n",commodity_name);
		printf("商品单价：%.2f￥\n",unit_price);
		printf("购买数量：%d\n",buying_num);
		printf("支付金额：%.2f￥\n",payment_amount);
		printf("收货地址：%s\n",address);
	}
};

int main()
{
	Commodity commodity(4.98f);
	
	printf("请输入商品名称："); 
	scanf("%s",&commodity.commodity_name);
	getchar();
	printf("请输入购买数量："); 
	scanf("%d",&commodity.buying_num);
	getchar();
	printf("请输入收货地址："); 
	scanf("%s",&commodity.address);

	commodity.Print_Commodity_Info();
	
} 
