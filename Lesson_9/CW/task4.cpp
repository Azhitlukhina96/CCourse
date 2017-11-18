#include "stdafx.h"
#include <stdlib.h>

void print_array(int array[], int size)
{
	for (int i = 0; i < size; i++)
		printf("%d\n", array[i]);
}

int sum_array(int *array, int size, int begin_id, int end_id) 
{
	int sum = 0;

	for (int i = begin_id; i < end_id; i++)
		sum += array[i];

	return sum;
}

int main()
{
	int *рtr_v = NULL;
	int size = 0;
	int i = 0;
	int sum = 0;
	printf("Enter massiv \n");
	scanf_s("%d", &size);
	рtr_v = (int *)malloc(size * sizeof(int));
	
	int begin_id = 0;
	int end_id = 0;
	scanf_s("%d", &begin_id);
	scanf_s("%d", &end_id);


	for (int i = 0; i < size; i++)
	{
		printf("Enter element massiv: ");
		scanf_s("%d", (рtr_v + i));
	}

	for (int i = 0; i <size; i++)
	{
		printf("%d\n", (рtr_v[i] + i));
	}
	/*
	for (int i = 0; i < size; i++)
	{
		sum = sum + (рtr_v[i] + i);

	}*/
	for (int i = 0; i < size; i++)
		рtr_v[i] = i;

	sum = sum_array(рtr_v, size, begin_id, end_id);
	
	print_array(рtr_v, size);
	printf("sum=  %d\n", sum);
	return 0;
}
