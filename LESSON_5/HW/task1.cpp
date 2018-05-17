#include "stdafx.h"
#include <math.h>
#define Pi 3.14159265359


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

int get_square(int a, int b) {
	return a * b;
}

float get_square(float a, float b) {
	return a * b;
}


int main()
{
	printf("%d\n", get_square(5, 4));
	printf("%f\n", get_square(float(5.5), float(4.2)));

	Rectangle my_rectangle;
	my_rectangle.set_a(2);
	my_rectangle.set_b(3);
	printf("Rectangle S = %d\n", my_rectangle.get_square());

	return 0;

}
