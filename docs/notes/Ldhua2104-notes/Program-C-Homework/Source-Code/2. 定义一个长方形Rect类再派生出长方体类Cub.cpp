#include <iostream>

class Rect
{
protected:
	float m_length;
	float m_width;
public:
	Rect(float length,float width): m_length(length) , m_width(width)
	{}
};

class Cub : public Rect
{
private:
	float m_height;
public:
	Cub(float height,float length,float width):
		m_height(height) , Rect(length,width){}
	
	float getArea()
	{
		return 2 * (m_height*m_length + m_height*m_width + m_width*m_length);
	}
	
	float getVolume()
	{
		return m_height*m_length*m_width;
	}
	
	void showInfo()
	{
		std::cout.precision(4);
		std::cout << "length=" << m_length << "  ";
		std::cout << "width="  << m_width  << "  ";
		std::cout << "height=" << m_height << '\n';
	}
};

int main()
{
	float length, width, height;
	std::cout << "输入长方体的长、宽、高：";
	std::cin >> length >> width >> height;
	
	std::cout << std::endl; 
	
	Cub cub(height,length,width);
	cub.showInfo();
	std::cout.precision(6);
	std::cout << "表面积=" << cub.getArea()   << "  "
			  << "体积="   << cub.getVolume();
}
