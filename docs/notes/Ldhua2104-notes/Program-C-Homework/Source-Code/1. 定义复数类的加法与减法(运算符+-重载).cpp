#include <iostream>

class Complex
{
private:
	float realPart;
	float imaginaryPart;
public:
	Complex(float _realPart,float _imaginaryPart):
		realPart(_realPart) , imaginaryPart(_imaginaryPart) {}
	
	void ShowComplex() const
	{
		std::cout << realPart << "+i" <<  imaginaryPart << std::endl;
	} 
	
	friend Complex operator+(const Complex& a ,const Complex& b);
	friend Complex operator+(float a ,const Complex& b);
	friend Complex operator-(const Complex& a,float b);
};

int main()
{
	Complex a(2,5), b(7, 8), c(0, 0);
	c=a+b;
	c.ShowComplex();
	c=4.1f+a;
	c.ShowComplex();
	c=b-5.6f;
	c.ShowComplex();
}

Complex operator+(const Complex& a ,const Complex& b)
{
	Complex c(a.realPart + b.realPart,a.imaginaryPart + b.imaginaryPart);
	return c;
}

Complex operator+(float a ,const Complex& b)
{
	Complex c(a + b.realPart, b.imaginaryPart);
	return c;
}

Complex operator-(const Complex& a,float b)
{
	Complex c(a.realPart - b, a.imaginaryPart);
	return c;
}
