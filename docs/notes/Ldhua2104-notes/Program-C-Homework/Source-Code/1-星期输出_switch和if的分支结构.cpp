#include "stdio.h"

int main()
{
	int day;
	scanf("%d",&day);
	
	printf("----if----\n");
	
	if (day == 0)
		printf("%s\n","星期天");
	else if (day == 1)
		printf("%s\n","星期一");
	else if (day == 2)
		printf("%s\n","星期二");
	else if (day == 3)
		printf("%s\n","星期三");
	else if (day == 4)
		printf("%s\n","星期四");
	else if (day == 5)
		printf("%s\n","星期五");
	else
		printf("%s\n","星期六");

	printf("----switch----\n");
	
	switch(day)
	{
		case 0:{
			printf("%s\n","星期天");
			break;}
		case 1:{
			printf("%s\n","星期一");
			break;}
		case 2:{
			printf("%s\n","星期二");
			break;}
		case 3:{
			printf("%s\n","星期三");
			break;}
		case 4:{
			printf("%s\n","星期四");
			break;}
		case 5:{
			printf("%s\n","星期五");
			break;}
		case 6:{
			printf("%s\n","星期六");
			break;}
	}
}
