// Поиск максимального элемента в двумерном массиве
#include "stdafx.h"
#include<math.h>
#define N 3

int main()
{
	int x[N][N] = { 1,2,3,4,5,6,7,8,9}, i, j, x_max;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
			printf("%d\n", x[i][j]);
		printf("\n");
	}

	printf("\n\n\n");

	
	x_max = x[0][0];

	for (i = 0; i<N; i++)
		for (j = 0; j<N; j++)
			if (x[i][j]>x_max)
				x_max = x[i][j];

	printf(" \n x_max=%d", x_max);


	return 0;

}
