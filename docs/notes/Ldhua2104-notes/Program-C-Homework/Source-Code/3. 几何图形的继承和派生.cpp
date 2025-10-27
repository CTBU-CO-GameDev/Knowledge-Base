#include <iostream>

#define pi 3.14f

class Shape
{
public:
	virtual float GetArea() { return 0.0f; }
	virtual void  ShowArea(){}
};

class Rectangle : public Shape
{
protected:
	float length;
	float width;
public:
	Rectangle() 
	{
		length = 0.0f;
		width  = 0.0f;
	}

	Rectangle(float _length, float _width) : length(_length > _width ? _length : _width),
		width(width < _length ?  _width : _length) {}

	float GetArea() override
	{
		return length * width;
	}

	void  ShowArea() override
	{
		std::cout << "The area of the Recanale is:" << GetArea();
	}
};

class Circle : public Shape
{
private:
	float radius;
public:
	Circle(float _radius) : radius(_radius) {}

	float GetArea() override
	{
		return pi * radius * radius;
	}

	void  ShowArea() override
	{
		std::cout << "The area of the Cirele is:" << GetArea();
	}
};

class Square : public Rectangle
{
private:
	float length;
public:
	Square(float _length) :length(_length) {}

	float GetArea() override
	{
		return length * length;
	}

	void  ShowArea() override
	{
		std::cout << "The area of the Recanale is:" << GetArea();
	}
};

int main()
{
	Shape* shapeR = new Rectangle(6, 4);
	Shape* shapeC = new Circle(5);
	Shape* shapeS = new Square(5);

	shapeC->ShowArea();
	std::cout << std::endl;
	shapeR->ShowArea();
	std::cout << std::endl;
	shapeS->ShowArea();

	delete shapeR;
	delete shapeC;
	delete shapeS;
}
