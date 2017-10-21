//Поиск максимального элемента в одномерном массиве в диапазоне, определённым пользователем программы
#include "stdafx.h"
#include <math.h>
#include <iostream> 
#define N 9


	
int main()
{
	int massiv[N];
	int max;

	printf("elements: ");
	for (int a = 0; a < N; a++)
	{
		massiv[a] = rand () % 100;
		printf ("|%d|", massiv[a] );
	}
	printf ("\n");

	max = massiv[0];
	
	for (int a = 1; a < N; a++)
	{
		if (max < massiv[a]) max = massiv[a];
	}
	printf( "\n  max element: |%d|; \n", max );

	return 0;

}
