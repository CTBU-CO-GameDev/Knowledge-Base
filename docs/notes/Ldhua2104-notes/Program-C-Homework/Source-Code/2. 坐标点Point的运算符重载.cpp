#include <iostream>

class Point
{
private:
	int x;
	int y;
public:
	Point(int X,int Y):x(X) , y(Y) {}
	
	void operator++(int) 
	{
		x++;
		y++;
	}
	
	void operator++() 
	{
		++x;
		++y;
	}
	
	void operator--(int) 
	{
		x--;
		y--; 
	}
	
	void operator--() 
	{
		--x;
		--y;
	}
	
	void ShowPoint() const
	{
		std::cout << '(' << x << ", " << y << ')' << std::endl;
	}
};

int main()
{
	int x , y;
	std::cin >> x >> y;
	
	Point point(x,y);
	point.ShowPoint();
	point.ShowPoint();
	
	point++;
	++point;
	point.ShowPoint();
	point.ShowPoint();
	
	point--;
	--point;
	point.ShowPoint();
}
