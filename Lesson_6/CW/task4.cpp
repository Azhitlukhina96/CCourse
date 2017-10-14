#include "stdafx.h"
#define N 2
#define M 3

int main()
{
	int i = 0;
	int j = 0;
	int matrix[N][M];
	int vector_r[N];
	int vector_c[M];


	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			matrix[i][j] = i*j;

	for (int i = 0; i < N; i++)
	{
		printf("%d\n", matrix[i][j]);
		for (int j = 0; j < M; j++)
			printf("%d ", matrix[i][j]);

	}

	int max = 0;
	for (int i = 0; i < N; i++) // перемещение по строкам
	{
		max = 0;
		for (int i = 0; i < M; i++)
			if (max < matrix[i][j])
			{
				max = matrix[i][j];
			}
		max = vector_r[i];
	}

	printf("max= %d\n ", max);
	
	for (int i = 0; i < N; i++)
	{
		printf("%d ", vector_r[i]);
	}

	
	/*

	for (int j = 0; j < M; j++)
	{
		if (max < matrix[j])
		{
			max = matrix[j];
		}
	}
	/*
	
	printf("max= %d\n ", max);
	return 0;

	
}
