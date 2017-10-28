#include "stdafx.h"
#include <stdlib.h>


int main()
{
	int *ptr_v = NULL;
	int vector_size = 0;
	int sum = 0;
	int umn = 1;
	int *adres = NULL;
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
	
	
	int max = 0;
	//*adres=&mas;
	for (int i = 0; i < vector_size; i++)
	{
		if (max < *(ptr_v + i))
		{
			max = *(ptr_v + i);
			adres = ptr_v + i;

		}
	}


	printf("max= %d\n ", max);
	printf("sum=  %d\n", sum);
	printf("umn=  %d\n", umn);
	printf("adres=  %d\n", adres);

	free(ptr_v);




		return 0;
}
