
//умножение 2-х матриц
#include "stdafx.h"
#include <math.h>
#define N 3


int main()
{
	int i, j, k;

	int matrix_A[N][N];
	int matrix_B[N][N];
	int matrix_C[N][N];

	printf("Matrix A:\n");
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
		{
			matrix_A[i][j];
		}

	printf("Matrix B:\n");
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			matrix_B[i][j];
		}
	}

	printf("Matrix C=AB:\n");
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			matrix_C[i][j] = 0;
		}
	}
	for (k = 0; k < N; k++)
	{
		matrix_C[i][j] += matrix_A[i][k] * matrix_B[k][j];
		printf("Matrix C= ");
	}
			
	
		printf("\n \n");
	

    return 0;
}
