//поиск корней квадратного уравнения

// ConsoleApplication8.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <math.h>


int main()
{
	float a;
	float b;
	float c;
	float result;
	printf("Vvedi a\n");
	scanf_s("%f", &a);
	printf("Vvedi b\n");
	scanf_s("%f", &b);
	printf("Vvedi c\n");
	scanf_s("%f", &c);

	if ((b*b - 4 * a*c) > 0) 
	{
		result = (- b + sqrt(b*b - 4 * a*c)) / (2 * a);
		printf("(- b + sqrt(b*b - 4 * a*c)) / (2 * a) =%f\n", result);
		result = (- b - sqrt(b*b - 4 * a*c)) / (2 * a);
		printf("(- b - sqrt(b*b - 4 * a*c)) / (2 * a) =%f\n", result);
	}
	else
		printf("Error!\n");
	return 0;
}

	
