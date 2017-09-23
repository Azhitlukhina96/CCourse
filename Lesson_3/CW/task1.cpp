
// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

float Pi = 3.14;
int main()
{
	int selestor = 0;
	float S = 0;
	float radius = 0;
	float side = 0;
	float a = 0;
	float b = 0;
	float h = 0;

	printf("Area calculation\n");
	printf("\tEnter 1 for circle\n");
	printf("\tEnter 2 square\n");
	printf("\tEnter 3 for rectangle\n");
	printf("\tEnter 4 triangle\n");
	scanf_s("%d", &selestor);
	switch (selestor)
	{ 

	case 1:
		printf("Enter radius:\n");
		scanf_s("%f", &radius);
		S = 3.14 * radius;
		break;

	case 2:
		printf("Enter side:\n");
		scanf_s("%f", &side);
		S = side * side;
		break;

	case 3:
		printf("Enter 1/2*(a*h):\n");
		scanf_s("%f", &a);
		scanf_s("%f", &h);
		S = 1/2*(a*h);
		break;

	case 4:
		printf("Enter a*b:\n");
		scanf_s("%f", &a);
		scanf_s("%f", &b);
        S = a * b;
		break;

	default:
		printf("Unexpected!\n");

    }
    printf("Area S = %f\n", S);
	return 0;
	}

