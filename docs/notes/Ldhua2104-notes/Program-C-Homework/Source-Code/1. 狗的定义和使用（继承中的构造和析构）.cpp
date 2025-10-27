#include <iostream>

class Mammal
{
public:
	Mammal()
	{
		std::cout << "Mammal constructor\n";
	}
	
	~Mammal()
	{
		std::cout << "Mammal destructor\n";
	}
};

class Dog : public Mammal
{
public:
	Dog()
	{
		std::cout << "Dog constructor\n";
	}

	void speak()
	{
		std::cout << "wang wang\n";
	}
	
	~Dog()
	{
		std::cout << "Dog destructor\n";
	}
};

void creating()
{
	Dog dog;
	dog.speak();
}

int main()
{
	creating();
} 
