#include "stdafx.h"
#include <math.h>
#define pi 3.14

class Сircle {
	float _r;
public:
	float get_square();
	void set_r(float);
};

float Сircle::get_square() {
	float S = pi * _r * _r;
	return S;
}

void Сircle::set_r(float r)
{
	_r = r;
}


int main()
{
	Сircle my_circle;
	my_circle.set_r(2);
	printf("S = %f\n", my_circle.get_square());
	return 0;
}
