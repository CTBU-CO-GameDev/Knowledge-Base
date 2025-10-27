#include "stdio.h"

void max_min(float* arr,float* result,int n);

int main()
{
	int n;
	float result[2];
	float arr[50];
	scanf("%d",&n);
	for(int i = 0;i < n;i++)
		scanf("%f",&arr[i]);
		
	max_min(arr,result,n);
	
	printf("%d\n",(int)result[0]);
	printf("%d",(int)result[1]);
}

void max_min(float* arr,float* result,int n)
{
	float max = 0.0f;
	float min = 0.0f;
	
	for(int i = 0;i < n;i++)
	{
		if( max <= arr[i])
			max = arr[i];
		if ( min >= arr[i])
			min = arr[i];
	}
	
	result[0] = max;
	result[1] = min; 
}
