#include "stdio.h"

int main()
{
	int day;
	scanf("%d",&day);
	
	printf("----if----\n");
	
	if (day == 0)
		printf("%s\n","������");
	else if (day == 1)
		printf("%s\n","����һ");
	else if (day == 2)
		printf("%s\n","���ڶ�");
	else if (day == 3)
		printf("%s\n","������");
	else if (day == 4)
		printf("%s\n","������");
	else if (day == 5)
		printf("%s\n","������");
	else
		printf("%s\n","������");

	printf("----switch----\n");
	
	switch(day)
	{
		case 0:{
			printf("%s\n","������");
			break;}
		case 1:{
			printf("%s\n","����һ");
			break;}
		case 2:{
			printf("%s\n","���ڶ�");
			break;}
		case 3:{
			printf("%s\n","������");
			break;}
		case 4:{
			printf("%s\n","������");
			break;}
		case 5:{
			printf("%s\n","������");
			break;}
		case 6:{
			printf("%s\n","������");
			break;}
	}
}
