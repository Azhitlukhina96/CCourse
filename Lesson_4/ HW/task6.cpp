
// ConsoleApplication9.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <math.h>


int main()
{
	int size = 0;
	printf("Enter size:\n");
	scanf_s("%d", &size);

	for (int i = size; i >= 0; i--)
	{
		for (int j = 0; j < i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}

    return 0;

}
