#include "stdafx.h"
#include "math.h"
#include <iostream>
#define N 6

int main()
{
	

	int matrix[N][N];
	int matrix_A[N][N];

	printf("\n matrix: \n");

	for (int i = 0; i < N; i++)
	{
		printf("\n");
		for (int j = 0; j < N; j++)
		{
			matrix[i][j] = rand() % 50;
			matrix_A[i][j] = 0;
			printf(" %d ", matrix[i][j]);
		}
	}

	printf(" \n \n matrix_A: \n");


	for (int i = 0; i < N; i++)
	{
		printf("\n");
		for (int j = 0; j < N; j++)
		{
			matrix_A[i][j] = matrix[j][i];
			printf(" %d ", matrix_A[i][j]);
		}
	}

	printf(" \n \n ");

	return 0;
}
