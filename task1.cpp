
#include "stdafx.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void quickSort(int *values, int left, int right) {
		
	int pivot = values[left];
	int left_border = left;
	int right_border = right;
	int tmp = 0;
	while (left_border < right_border) {
		while ((values[right_border] >= pivot) && (left_border < right_border)) {
			right_border--;
		}
		while ((values[left_border] <= pivot) && (left_border < right_border)) {
			left_border++;
		}
		if (values[left_border] != values[right_border]) {
			tmp = values[left_border];
			values[left_border] = values[right_border];
			values[right_border] = tmp;
		}
	}
	tmp = values[right_border];
	values[right_border] = values[left];
	values[left] = tmp;
	if (left < left_border) {
		quickSort(values, left, left_border - 1);
	}
	if (right > left_border) {
		quickSort(values, left_border + 1, right);
	}
	
}

void bubble_sort(int mas[], int size)
{
	int buf = 0;

	for (int i = 0; i < size; i++)
	{
		for (int j = size - 1; j > i; j--)
		{
			if (mas[j - 1] > mas[j])
			{
				buf = mas[j - 1];
				mas[j - 1] = mas[j];
				mas[j] = buf;
			}
		}
	}

	

int main()
{

	srand(time(0)); 
	
	int mas100[100];
	for (int i = 0; i < 100; i++)
		mas100[i] = rand() % 30;
	clock_t time_begin = clock();
	quickSort(mas100, 0, 99);
	clock_t time_end = clock();	

	printf("Time: %.6fs\n", (double)(time_end - time_begin) / CLOCKS_PER_SEC);

	
	int mas1000[1000];
	for (int i = 0; i < 1000; i++)
		mas1000[i] = rand() % 30;
	time_begin = clock();
	quickSort(mas1000, 0, 999);
	time_end = clock();

	printf("Time: %.6fs\n", (double)(time_end - time_begin) / CLOCKS_PER_SEC);

	int mas10000[10000];
	for (int i = 0; i < 10000; i++)
		mas10000[i] = rand() % 30;
	
	quickSort(mas10000, 0, 9999);
	time_end = clock();

	printf("Time: %.6fs\n", (double)(time_end - time_begin) / CLOCKS_PER_SEC);

	return 0;
}




