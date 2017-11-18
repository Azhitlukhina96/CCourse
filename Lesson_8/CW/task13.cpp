#include "stdafx.h"
#include <stdlib.h>

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

	int selector = 0;
	for (int i = 0; i < vector_size; i++)
	{
		selector = 0;
		if (i == 0)
		{
			printf("%d", ptr_v[i]);
			selector = selector + 1;
		}
		else
		{
			for (int j = i - 1; j >= 0; j--)
			{
				if (ptr_v[i] == ptr_v[j])
				{
					selector = selector + 1;

				}
			}

		}
		if (selector == 0)
		{
			printf("%d", ptr_v[i]);
		}

	}
	printf("\n \n");
	free(ptr_v);
	return 0;
}
