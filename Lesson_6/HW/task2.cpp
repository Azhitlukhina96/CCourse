#include "stdafx.h"
#include "math.h"
#include <iostream>
#define N 3

int main()
{
	int i, j, k, q;

	int matrix_A[N][N];
	int matrix_B[N][N];
	int matrix_C[N][N];

	printf("\n matrix_A: \n");

	for (int i = 0; i < N; i++)
	{
		printf("\n");
		for (int j = 0; j < N; j++)
		{
			matrix_A[i][j] = rand() % 50;
			printf("| %d |", matrix_A[i][j]);
		}
	}

	printf("\n \n matrix_B: \n");

	for (int i = 0; i < N; i++)
	{
		printf("\n");
		for (int j = 0; j < N; j++)
		{
			matrix_B[i][j] = rand() % 50;
			matrix_C[i][j] = 0;
			printf("| %d |", matrix_B[i][j]);
		}
	}

	printf("\n \n");

	for (int i = 0; i < N; i++)
	{
		for (int k = 0; k < N; k++)
		{
			for (int q = 0; q < N; q++)
			{
				matrix_C[i][k] = matrix_C[i][k] + (matrix_A[i][q] * matrix_B[q][k]);
			}
		}
	}

	printf("matrix_C: \n ");

	for (int i = 0; i < N; i++)
	{
		printf("\n");
		for (int j = 0; j < N; j++)
		{
			printf("| %d |", matrix_C[i][j]);
		}
	}

	printf("\n \n");

	return 0;
}
