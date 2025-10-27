#include <iostream>

#define INT 	1
#define CHAR	2
#define FLOAT   3

class DataType
{
private:
	int intType;
	char charType;
	float floatType;
public:
	DataType(int x): intType(x)
	{
		std::cout << "int:" << intType;
	}
	
	DataType(char x): charType(x)
	{
		std::cout << "character:" << charType;
	}
	
	DataType(float x): floatType(x)
	{
		std::cout << "float:" << floatType;
	}
};

int main()
{
	int type;
	std::cin >> type;
	
	switch(type)
	{
		case INT:
			{
				int data;
				std::cin >> data;
				
				DataType datatype(data);
				break;
			}
		case CHAR:
			{
				char data;
				std::cin >> data;
				
				DataType datatype(data);
				break;
			}
		case FLOAT:
			{
				float data;
				std::cin >> data;
				
				DataType datatype(data);
				break;
			}
	}
	
} 
