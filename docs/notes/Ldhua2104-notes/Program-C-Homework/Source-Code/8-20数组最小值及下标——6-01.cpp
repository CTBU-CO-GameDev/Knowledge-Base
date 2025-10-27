#include "stdio.h"
#define MAX_SIZE 999

int main()
{
	int arr[MAX_SIZE];
	int n;
	int index = 0;
	scanf("%d",&n);
	for(int i = 0; i < n;i++)
		scanf("%d",&arr[i]);
	
	int result = arr[0];
		
	for(int i = 0; i < n;i++)
	{
		if( result >= arr[i])
		{
			result = arr[i];
			index = i;
		}
	}
	
	printf("%d\n%d",result,index);		
}
