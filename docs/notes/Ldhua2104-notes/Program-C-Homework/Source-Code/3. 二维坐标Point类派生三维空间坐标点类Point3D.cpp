#include <iostream>
#include <math.h>

class Point
{
protected:
	double X;
	double Y;
public:
	Point(){ /* create (0,0) */}
	
	Point(double x,double y): X(x) , Y(y) {}
	
	double getX() const { return X; }
	double GetY() const { return Y; }
	  
	double dist(const Point& other) const
	{
		return sqrt((X - other.X) * (X - other.X) + (Y - other.Y)*(Y - other.Y));
	}
};

class Point3D : public Point
{
private:
	double Z;
public:
	Point3D() {/* create (0,0,0) */}
	
	Point3D(double x, double y, double z):
		Point(x,y) , Z(z) {}
		
	double GetZ() const { return Z; }
	
	double dist(const Point3D& other)
	{
		return sqrt((X - other.X) * (X - other.X) + 
					(Y - other.Y) * (Y - other.Y) + 
					(Z - other.Z) * (Z - other.Z));
	}
};

int main()
{
	const Point3D originPoint(0,0,0);
	Point3D pointB( 4,5.6,7.8);
	
	std::cout << "|A-B|=" << pointB.dist(originPoint);
}
