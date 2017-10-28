//Произведение и сумма элементов в массиве

#include "stdafx.h"
#include <stdlib.h>


int main()
{
	int *ptr_v = NULL;
	int vector_size = 0;
	int sum = 0;
	int umn = 1;
	printf("Enter massiv \n");
	scanf_s("%d", &vector_size);
	
	ptr_v = (int *)malloc(vector_size * sizeof(int));
	
	for (int i = 0; i < vector_size; i++)
	{
		//ptr_v[i] = i;
		printf("Enter element massiv: ");
		scanf_s("%d", (ptr_v + i));
	}
	
	for (int i = 0; i < vector_size; i++)
	{
		printf("%d\n", *(ptr_v + i));
	}

	for (int i = 0; i < vector_size; i++)
	{
		sum = sum + *(ptr_v + i);
		umn= umn * *(ptr_v + i);

	}
	printf("sum=  %d\n", sum);
	printf("umn=  %d\n", umn);


	free(ptr_v);




		return 0;
}
