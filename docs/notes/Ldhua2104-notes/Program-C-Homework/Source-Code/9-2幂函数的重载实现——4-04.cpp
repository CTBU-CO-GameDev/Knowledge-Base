#include <iostream>
#include <string>

void myPower(float x,unsigned int n);
void myPower(char chr,unsigned int n);

int main()
{
	int type;
	float x;
	char chr;
	unsigned int n;
	std::cin >> type;
	
	if(type == 1)
	{
		std::cin >> x >> n;
		myPower(x,n);
	}
	else
	{
		std::cin >> chr >> n;
		myPower(chr,n);
	}
}

void myPower(float x,unsigned int n)
{
	float result = 1;
	for(int i = 0;i < (int)n;i++)
	{
		result *= x;
	}
	
	std::cout << result;
}

void myPower(char chr,unsigned int n)
{
	std::string str(n,chr);
	std::cout << str;
}
