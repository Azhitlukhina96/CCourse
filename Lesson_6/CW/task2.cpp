#include "stdafx.h"
#define N 10



int main()
{
	int i = 0;
	int vector[N];
	for (i = 0; i < N; i++)
		scanf_s("%d", &vector[i]);	

	for (i = 0; i < N; i++)
		printf("%d\n", vector[i]);

	int max = 0;
	for (i = 0; i < N; i++)
	{
		if (max < vector[i])
		{
			max = vector[i];
		}
	}
	printf("max= %d\n ", max);
}
