// Задача №1
#include "stdafx.h"
#include <math.h>

int main()
{
	float x, x0, y, y0, a, b, result = 0;
	printf("Enter x, y: ");
	scanf_s("%f, %f", &x, &y);
	printf("Enter x0, y0: ");
	scanf_s("%f, %f", &x0, &y0);
	printf("Enter a, b: ");
	scanf_s("%f, %f", &a, &b);

	if ((x - x0) * (x - x0) / (a*a) + (y - y0) * (y - y0) / (b*b) == 1)
	{
		printf("the point came into this figure");
		return 0;
	}

	if ((x - x0) * (x - x0) / (a * a) + (y - y0) * (y - y0) / (b * b) < 1)
	{
		printf("the point came into this figure");
		return 0;
	}
	else
	{
		printf("the point did not fall into this figure");
	}
	return 0;
}
