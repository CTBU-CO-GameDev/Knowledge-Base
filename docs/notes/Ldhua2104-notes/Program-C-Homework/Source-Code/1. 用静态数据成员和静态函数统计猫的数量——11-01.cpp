#include <iostream>

class Cat
{
private:
	int cat_age;
public:
	static int number;
public:
	Cat() { number++; }
	
	void setAge(int age)
	{ cat_age = age; }
	
	~Cat()
	{
		number--;
		std::cout << "destructing of the cat!\n"; 
	}
	
	static int HowManyCats()
	{ return number; }
};

int Cat::number = 0;

void creating()
{	
	Cat* cats = new Cat[5];
	
	for(int i = 0;i < 5;i++)
		cats[i].setAge(i+1);
		
	std::cout << "after the Cat array is created,the number of the cat is:" << Cat::number << std::endl;
	
	delete[] cats;
}

int main()
{
	std::cout << "before the function,the number of the cat is:" << Cat::number << std::endl;
	std::cout << "before the Cat array is created,the number of the cat is:" << Cat::number << std::endl;
	creating();
	std::cout << "after the function,the number of the cat is:" << Cat::number << std::endl;
}
