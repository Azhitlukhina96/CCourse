#include "stdafx.h"
#include <stdlib.h>
#include <time.h>


int main()
{
	srand(time(NULL));
	int *vector = NULL;
	int vector_size = 0;
	scanf_s("%d", &vector_size);
	vector = (int *)calloc(sizeof(int), vector_size);
	for (int i = 0; i < vector_size; i++)
	{
		vector[i] = rand() % 21 - 10;
		printf("%d", vector[i]);
	}

	printf("\n, \n");

	for (int i = 0; i < vector_size; i++)
	{
		do
		{
			vector[i] = rand() % 31 + 30;
		} while (vector[i] % 2! = 0);
		{
			printf("%d", vector[i]);
		}

	}
	printf("\n, \n");
	return 0;
}
