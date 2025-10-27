#include "stdio.h"

int main()
{
	int x,y,z;
	int sum = 0;
	float aver = 0.0f;
	scanf("%d%d%d",&x,&y,&z);
	
	sum = x + y + z;
	aver = (float)sum / 3;
	
	printf("%d\n",sum);
	printf("%.2f",aver);
}
