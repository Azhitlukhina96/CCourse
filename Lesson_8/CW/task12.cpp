#include "stdafx.h"
#include <stdlib.h>
//домашнее задание-доделать


int main()
{
	int *ptr_v = NULL;
	int vector_size = 0;
	int i = 0;
	int value = 0;
	printf("Enter massiv \n");
	scanf_s("%d", &vector_size);
	
	ptr_v = (int *)malloc(vector_size * sizeof(int));

	while (i < vector_size)
	{
		scanf_s("%d", &value);
		if ((value >= 0) && (value < 10))
		{
			ptr_v[i] = value;
			printf("OK\n");
			i++;
		}
		else
		{
			printf("Error! \n");
		}
	}
	
	for (int i = 0; i < vector_size; i++)
	{
		printf("%d\n", *(ptr_v + i));
	}
	
	
	free(ptr_v);




		return 0;
}
