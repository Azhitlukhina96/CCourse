// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>


int main()
{
	float a = 0;
	float b = 0;
	float c = 0;
	float mx = 0;
	float my = 0;
	float result= 0;
	printf("Enter a\n");
	scanf_s("%f", &a);
	printf("Enter b\n");
	scanf_s("%f", &b);
	printf("Enter c\n");
	scanf_s("%f", &c);
	printf("Enter mx\n");
	scanf_s("%f", &mx);
	printf("Enter my\n");
	scanf_s("%f", &my);

    


	if (a,b != 0)
	{
		result = fabsf(a*mx + b*my + c) / sqrtf(a * a + b * b);
		printf("fabsf (a*mx + b*my = c ) / sqrtf(a * a + b * b) = %f\n", result);
		
	}
	else
		printf("a,b != 0");
	return 0;
}

