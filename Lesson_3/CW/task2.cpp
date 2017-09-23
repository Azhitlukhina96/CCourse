// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>


int main()
{
	float var = 0;
	float result = 0;
	printf("Enter var\n");
	scanf_s("%f", &var);
	if (var >= 0)
	{
		result = sqrtf(var);
		printf("sqrtf(var) = %f\n", result);
	}
	else
		printf("Error!\n");
	return 0;
}
