#include <iostream>
#define N 5

void swap_value(int& x, int& y);
void bubble_sort(int* arr,int size); 

int main()
{
	int arr[N];
	for(int i = 0;i < N;i++)
	{
		std::cin >> arr[i];
	}
		
	bubble_sort(arr,N);
	
	for(int i = 0;i < N;i++)
	{
		std::cout << arr[i] << " ";
	}
}

void swap_value(int& x, int& y)
{
	int c = x;
	x = y;
	y = c;
}

void bubble_sort(int* arr,int size)
{
	for (int i = 0; i < size - 1; i++)		   
	{
		for (int j = 0; j < size - 1 - i; j++) 
		{
			if (arr[j] > arr[j + 1])
				swap_value(arr[j], arr[j + 1]);
		}
	}
}
