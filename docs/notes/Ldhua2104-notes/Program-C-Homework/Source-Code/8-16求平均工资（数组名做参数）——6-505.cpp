#include "stdio.h"

void Get_aver(double* salary,double& result,int n);

int main()
{
	int n;
	double result;
	double salary[10];
	scanf("%d",&n);
	for(int i = 0;i < n;i++)
		scanf("%lf",&salary[i]);
		
	Get_aver(salary,result,n);
	
	if( (int)result == result )
		printf("%d",(int)result);
	else
		printf("%.1f",result);	
}

void Get_aver(double* salary,double& result,int n)
{
	double sum = 0;
	
	for(int i = 0;i < n;i++)
		sum += salary[i];
	
	result = sum / n;
}
