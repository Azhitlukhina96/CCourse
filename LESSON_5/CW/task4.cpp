#include "stdafx.h"

#include <math.h>

class Vector
{
	int _x1;
	int _x2;
	int _y1;
	int _y2;
public:
	void add_vector(Vector);
	void set_x1(int);
	void set_x2(int);
	void set_y1(int);
	void set_y2(int);

	int get_x1() {
		return _x1;
	}
	int get_x2() {
		return _x2;
	}
	int get_y1() {
		return _y1;
	}
	int get_y2() {
		return _y2;
	}
};

void Vector::add_vector(Vector v)
{
	_x2 = v.get_x1() + _x1 - v.get_x2() - _x2;
	_y2 = v.get_y1() + _y1 - v.get_y2() - _y2;
}

void  Vector::set_x1(int x1)
{
	_x1 = x1;
}

void  Vector::set_x2(int x2)
{
	_x2 = x2;
}

void  Vector::set_y1(int y1)
{
	_y1 = y1;
}

void  Vector::set_y2(int y2)
{
	_y2 = y2;
}
int main()
{
	Vector my_vector, my_vector2;
	my_vector.set_x1(1);
	my_vector.set_x2(5);
	my_vector.set_y1(1);
	my_vector.set_y2(5);

	my_vector2.set_x1(21);
	my_vector2.set_x2(25);
	my_vector2.set_y1(16);
	my_vector2.set_y2(53);

	my_vector.add_vector(my_vector2);

	printf("X2 = %d\n", my_vector.get_x2());
	printf("Y2 = %d\n", my_vector.get_y2());
	return 0;
}
