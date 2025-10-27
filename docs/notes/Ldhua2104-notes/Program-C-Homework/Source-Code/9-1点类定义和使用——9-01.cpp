#include <iostream>

class Points
{
private:
	int m_x;
	int m_y;
public:
	void setxy(int x,int y);
	void displayxy();
};

int main()
{
	Points pointA;
	pointA.setxy(3,4);
	Points pointB;
	pointB.setxy(5,6);
	
	std::cout << "The first point is:";
	pointA.displayxy();
	std::cout << "The second point is:";
	pointB.displayxy();
}

void Points::setxy(int x,int y)
{
	m_x = x;
	m_y = y;
}


void Points::displayxy()
{
	std::cout << "(" << m_x << "," << m_y << ")\n";
}
