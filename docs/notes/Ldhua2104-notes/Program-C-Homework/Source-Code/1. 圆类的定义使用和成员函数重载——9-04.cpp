#include <iostream>
#define pi 3.14f

class Circle
{
private:
	int m_radius1;
	int m_radius2;
public:
	Circle()
	{
		std::cout << "the circle is created!" << std::endl; 
	}
	
	void GetArea(int radius)
	{
		m_radius1 = radius;
		float area = pi * m_radius1 * m_radius1;
		std::cout << "the area is:" << area;
	}
	
	void GetArea(int radius1,int radius2)
	{
		m_radius1 = radius1;
		m_radius2 = radius2;
		float area1 = pi * m_radius1 * m_radius1;
		float area2 = pi * m_radius2 * m_radius2;
		float area = (area1 < area2) ? (area2 - area1) : (area1 - area2);
		std::cout << "the ring's area is:" << area;
	}	
};

int main()
{
	int r1,r2;
	
	std::cin >> r1;
	if(std::cin.get() != '\n')
	{
		std::cin >> r2;
		Circle circle;
		circle.GetArea(r1,r2);
	}
	else
	{
		Circle circle;
		circle.GetArea(r1);
	}
	
} 
