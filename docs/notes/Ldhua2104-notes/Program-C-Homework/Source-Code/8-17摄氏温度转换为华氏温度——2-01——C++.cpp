#include "stdio.h"

int main()
{
	int C;
	float F;
	scanf("%d",&C);
	
	F = ((float)(C*9)) / 5+ 32;
	
	if( (int)F == F )
		printf("%d",(int)F);
	else
		printf("%.1f",F);
}
