#include "stdio.h"

struct Student
{
	char name[15];
	int score;
};

void swap_value(struct Student* x,struct Student* y);
void bubble_sort(struct Student* stu,int size); 

int main()
{
	struct Student stu[50];
	int i , n;
	scanf("%d",&n);
	
	for(i = 0;i < n;i++)
	{
		scanf("%s%d",stu[i].name,&stu[i].score);
	}
	
	bubble_sort(stu,n);
	
	for(i = 0;i < n;i++)
	{
		printf("%15s",stu[i].name);
		printf("%5d\n",stu[i].score);
	}
}

void swap_value(struct Student* x,struct Student* y)
{
	struct Student c = *x;
	*x = *y;
	*y = c;
}

void bubble_sort(struct Student* stu,int size)
{
	int i , j;
	for (i = 0; i < size - 1; i++)		   
	{
		for (j = 0; j < size - 1 - i; j++) 
		{
			if ( stu[j].score < stu[j + 1].score )
				swap_value( &stu[j], &stu[j + 1]);
		}
	}
}
