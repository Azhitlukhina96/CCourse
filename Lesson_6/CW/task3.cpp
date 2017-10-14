#include "stdafx.h"
#define N 2
#define M 3

int main()
{
	int i = 0;
	int j = 0;
	int matrix[N][M];
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			matrix[i][j] = i*j;

	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			printf("%d ", matrix[i][j]);

	return 0;
}
