#include <iostream>

class Boat;

class Car
{
private:
	float weight;
public:
	Car(float weight):weight(weight) {}
	
	friend float operator+(Car& car,Boat& boat); 
};

class Boat
{
private:
	float weight;
public:
	Boat(float weight):weight(weight) {}
	
	friend float operator+(Car& car,Boat& boat); 
};

float operator+(Car& car,Boat& boat)
{
	return car.weight + boat.weight;
}

int main()
{
	float carWeight , boatWeight;
	std::cin >> boatWeight >> carWeight;
	
	Car car(carWeight);
	Boat boat(boatWeight);
	
	float totalWeight = car + boat;
	std::cout << totalWeight;
}
