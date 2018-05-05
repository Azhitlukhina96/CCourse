#include "stdafx.h"


class Rectangle 
{
	int _a;
	int _b;
public:
	int get_square();
	void set_a(int);
	void set_b(int);
};

int Rectangle::get_square() 
{
	int S = _a * _b;
	return S;
}

void Rectangle::set_a(int a) 
{
	_a = a;
}

void Rectangle::set_b(int b) 
{
	_b = b;
}

int main()
{
	Rectangle my_rectangle;
	my_rectangle.set_a(2);
	my_rectangle.set_b(3);
	printf("S = %d\n", my_rectangle.get_square());
	return 0;
}
