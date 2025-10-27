#include "stdio.h"

struct Time
{
	int year;
	int month;
	int day;
	
	int isLunYear()
	{
		bool condition_1 = (year % 4 == 0) && (year % 100 != 0);
		bool condition_2 = (year % 100 == 0) && (year % 400 == 0);
	
		return condition_1 || condition_2;
	}
	
	int Get_date()
	{
		switch(1)
		{
			case 1:
			{
				if(month == 1)
					break;
			}	
			case 2:
			{
				day += 31;
				if(month == 2)
					break;
			}
			case 3:
			{
				if(isLunYear())
					day += 29;
				else
					day += 28;
				if(month == 3)
					break;
			}
			case 4:
			{
				day += 31;
				if(month == 4)
					break;
			}
			case 5:
			{
				day += 30;
				if(month == 5)
					break;
			}
			case 6:
			{
				day += 31;
				if(month == 6)
					break;
			}
			case 7:
			{
				day += 30;
				if(month == 7)
					break;
			}
			case 8:
			{
				day += 31;
				if(month == 8)
					break;
			}
			case 9:
			{
				day += 31;
				if(month == 9)
					break;
			}
			case 10:
			{
				day += 30;
				if(month == 10)
					break;
			}
			case 11:
			{
				day += 31;
				if(month == 11)
					break;
			}
			case 12:
			{
				day += 30;
				if(month == 12)
					break;
			}
		}
		return day;
	}
};

int main()
{
	Time time;
	scanf("%d%d%d",&time.year,&time.month,&time.day);
	
	printf("%d",time.Get_date());
}
