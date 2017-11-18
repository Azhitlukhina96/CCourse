#include "stdafx.h"
#include <stdlib.h>
void print_array(int *array, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d\n", array[i]);
	}
}

int main()
{
	int *ptr_v = NULL;
	int vector_size = 0;
	scanf_s("%d", &vector_size);
	ptr_v = (int *)malloc(vector_size * sizeof(int));
	for (int i = 0; i < vector_size; i++)
		ptr_v[i] = i;
	print_array(ptr_v, vector_size);
	return 0;
}
