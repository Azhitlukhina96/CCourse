#include "stdafx.h"

#include <math.h>

class Segment
{
	int _x1;
	int _x2;
	int _y1;
	int _y2;
public:
	int get_square();
	void set_x1(int);
	void set_x2(int);
	void set_y1(int);
	void set_y2(int);
};

int Segment::get_square()
{
	int L = sqrtf((_y2-_y1)*(_y2-_y1)+(_x2-_x1)*(_x2-_x1));
	return L;
}

void Segment::set_x1(int x1)
{
	_x1 = x1;
}

void Segment::set_x2(int x2)
{
	_x2 = x2;
}

void Segment::set_y1(int y1)
{
	_y1 = y1;
}

void Segment::set_y2(int y2)
{
	_y2 = y2;
}
int main()
{
	Segment my_segment;
	my_segment.set_x1(1);
	my_segment.set_x2(5);
	my_segment.set_y1(1);
	my_segment.set_y2(5);
	
	printf("L = %d\n", my_segment.get_square());
	return 0;
}
