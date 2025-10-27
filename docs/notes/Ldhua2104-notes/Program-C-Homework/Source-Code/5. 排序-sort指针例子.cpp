#include <iostream>
#include <iomanip>
#include <cmath>

void swap_value(float* x,float* y);
void bubble_sort(float* arr); 

int main()
{
	float arr[10];
	for(int i = 0;i < 10;i++)
	{
		std::cin >> arr[i];
	} 
	
	bubble_sort(arr);
	
	std::cout << std::setiosflags(std::ios::fixed);
	for(int i = 0;i < 10;i++)
	{
		std::cout << std::setprecision(2) << arr[i];
		if(i != 9)
			std::cout << ',';
	}
}

void swap_value(float* x, float* y)
{
	float c = *x;
	*x = *y;
	*y = c;
}

void bubble_sort(float* arr)
{
	for (int i = 0; i < 9; i++)		   
	{
		for (int j = 0; j < 9 - i; j++) 
		{
			if ( fabs( *(arr + j) ) < fabs( *(arr + j + 1) ) )  
				swap_value(arr + j, arr + j + 1);
		}
	}
}
