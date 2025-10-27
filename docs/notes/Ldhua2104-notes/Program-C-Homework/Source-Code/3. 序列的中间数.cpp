#include <iostream>

int getMiddleNumber(int* arr,int size);

int main()
{
	int n;
	int arr[1000];
	std::cin >> n;
	
	for(int i = 0;i < n;i++)
	{
		std::cin >> arr[i];
	}
	
	std::cout << getMiddleNumber(arr,n);
}

int getMiddleNumber(int* arr,int size)
{
	int MiddleNumber = -1;
	int count = 0;
	for(int i = 0;i < size;i++)
	{
		count = 0;
		for(int j = 0; j < size ;j++)
		{
			if(arr[j] > arr[i])
				count++;
			else if(arr[j] < arr[i])
				count--;
		}
		
		if(count == 0)
		{
			MiddleNumber = arr[i];
		}
	}
	
	return MiddleNumber;
}
