#include "stdafx.h"
#include "math.h"
#include <iostream>
#define N 6 

int main()
{

	int matrix[N][N];

	printf("\n matrix: \n");

	for (int i = 0; i < N; i++)
	{
		printf("\n");
		for (int j = 0; j < N; j++)
		{
			matrix[i][j] = rand() % 10;
			printf(" %d ", matrix[i][j]);
		}
	}

	printf("\n");

	int b = matrix[0][0];

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (b < matrix[i][j])
			{
				b = matrix[i][j];
			}
		}
	}


	printf("\n max number: %d; \n", b);


	return 0;
}
