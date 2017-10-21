// Задача №3
#include "stdafx.h"
#include <math.h>
#define N 3
#define M 3 

int main()
{

	int matrix[N][M];
	int i, j;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			matrix[i][j] = i+j;
		}
	}


	for (int i = 0; i < N; i++)
	{
		printf("\n");

		for (int j = 0; j < M; j++)
		{
			printf("[%d ]", matrix[i][j]);
		}

	}

	for (int i = 0; i < N; i++)
	{
		printf("\n");

		for (int j = 0; j < M; j++)
		{
			printf("[%d ]", matrix[i][j]);
		}
	}

	int imax = 0;
	int jmax = 0;
	
	printf("\n \n");
	imax = matrix[0][0];

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
			if (imax < matrix[i][j])
			{
				imax = matrix[i][j];
			}
		printf("\t max number in %d line = %3.d \n", i, imax);
	}
	
	printf("\n \n");
	jmax = matrix[0][0];

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			if (jmax < matrix[i][j])
			{
				jmax = matrix[i][j];
			}
		//printf("\t max number in %d column = %3.d \n", j, jmax);
	}

	int result = 0;
	int countS;   
	for (int i = 0; i < N; i++) 
	{
		int sum = 0;
		for (int j = 0; j < M; j++) 
		{
			if (matrix[i][j] > 0) 
			{ 
				sum = sum + matrix[i][j]; 
			}
			if (sum > result) 
			{
				result = sum;
				countS = i;
			}
		}
	}
	printf("The string in which the maximum sum of positive integers = \n", countS);

	for (int j = 0; j < M; j++) 
	{
		printf(" %d\n", matrix[countS][j]);
	}
	
return 0;
}



