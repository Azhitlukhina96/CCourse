// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"



int factorial(int number)
{
	int factorial= 1;
	for (int i = 1; i <= number; i++)
	{
		factorial *= i;
	}
	return factorial;
}

int main()
{
	int number;
	printf ("Vvedi number:\n");
	scanf_s("%d", &number);
	if (number >= 0)
	{
		int result = 0;
		result = factorial(number);
		printf ("factorial(%d) = %d\n", number, result);
	}
	else
	{
		printf( "Error: number < 0");
	}

	return 0;
}
