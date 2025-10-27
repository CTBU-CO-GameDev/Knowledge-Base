#include "stdio.h"

void add_one(int* time)
{
	if(time[2] == 59)
	{
		time[2] = 0;
		time[1] += 1;
	}
	else
		time[2] += 1;
	
	if(time[1] == 60)
	{
		time[1] = 0;
		time[0] += 1;
	}
	
	if(time[0] == 24)
		time[0] = 0;
		
}

int main()
{
	int time[3];
	scanf("%d%d%d",&time[0],&time[1],&time[2]);
	
	add_one(time);
	printf("%d:%d:%d",time[0],time[1],time[2]);
}
