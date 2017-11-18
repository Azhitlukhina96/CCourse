#include "stdafx.h"
#include <stdlib.h>

void print_array(int array[], int size)
{
	for (int i = 0; i < size; i++)
		printf("%d\n", array[i]);
}

int main()
{
	int *vector = NULL;
	int *new_vector = NULL;
	int vector_size = 0;
	int new_value = 0;
	int position = 0;
	scanf_s("%d", &vector_size);
	vector = (int *)malloc(sizeof(int)*vector_size);

	while (1)
	{
		scanf_s("%d", &new_value);
		if (new_value < 0)
			break;
		if (position == vector_size)
		{
			new_vector = (int *)realloc(vector, vector_size*sizeof(int) * 2);
			for (int i = 0; i < position; i++)
				new_vector[i] = vector[i];
			vector = new_vector;
		}
		vector[position] = new_value;
		position++;
	}
	print_array (vector, position);
	return 0;
}
