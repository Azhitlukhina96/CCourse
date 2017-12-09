#include "stdafx.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define BUFFER_SIZE 1024
#include <string.h>
//сортировка простыми вставками

void InsertSort(float a[], int size)
{
	float buf = 0;
	float k = 0;
	int position = 0;

	printf("\n--------\n");

	size--;

	printf("\nsize: %d\n", size);

	for (int i = 0; i < size; ++i)
	{
		buf = a[i];

		for (int j = i - 1; j >= 0; --j)
		{
			if (buf < a[j]) // Поиск минимума
			{

				buf = a[j + 1];
				position = j;
			}
			
		}
		
		for ()

		// Вставка в отсортированную последовательность

		// нужно добавить цикл для вставки в последовательность от 0 до i
		k = a[i];
		a[i] = buf;
		a[position] = k;

		for (int m = 0; m < size; m++)
		{
			printf("{%.0f}", a[m]);
		}


		printf("\n\n\n");
	}
}



int main()
{

	FILE *array2;

	float *row = NULL;
	int size = 1;
	float *brow = NULL;

	row = (float*)malloc(sizeof(float));


	errno_t err = fopen_s(&array2, "C:\\Users\\uc2\\Desktop\\array2.txt", "r");
	if (err)
		printf_s("The file array2.txt was not opened\n");
	else
	{
		int a = 0;
		while (fscanf_s(array2, "%f", &row[a]) != EOF)
		{
			printf(" %.0f ", row[a]);
			a++;
			size++;

			brow = (float*)realloc(row, size * sizeof(float));
			row = brow;
		}
	}

	printf("\n");

	InsertSort(row, size);

	printf("\n");

	return 0;
}
