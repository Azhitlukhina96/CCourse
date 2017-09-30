//нужно доработать программу, чтобы была правильная нумерация

// ConsoleApplication9.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <math.h>


int main()
{
	int previous_1 = 0;
	int previous_2 = 1;
	int result = 0;
    int position = 0;

	scanf_s("%d", &position);

	for (int i = 0; i < position; i++)
	{
		result = previous_1 + previous_2;
		previous_1 = previous_2;
		previous_2 = result;
		printf("%d", result);
	}
	printf("\nResult: %d\n", result);
    return 0;

}
