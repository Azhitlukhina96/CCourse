#include "stdafx.h"
#include "math.h"
#include <iostream>
#define N 6

int main()
{

	int matrix[N];

	printf("\n matrix: \t");
	
	for (int j = 0; j < N; j++)
	{
		matrix[j] = rand() % 10;
		printf(" %d ", matrix[j]);
	}

	printf("\n");

	printf("min number = %d, max number= %d :", 1, N);
	int a = 0, b = 0, c = 0;
	scanf_s("%d, %d", &a, &b);
	a = a - 1;
	b = b - 1;
	c = matrix[a];

	for (; a < b; a++);
	{
		if (c < matrix[a])
		{
			c = matrix[a];
		}
	}

	printf("max number: %d; \n", c);


	return 0;
}
