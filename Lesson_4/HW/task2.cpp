
// ConsoleApplication9.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <math.h>


int main()
{
	int range = 0;
	int counter = 0;
	printf("Enter range:\n");
	scanf_s("%d", &range);

	if (range > 0)
	{

		while (counter <= range)
		{
			printf("%d\n, range");
			counter++;
		}
	}
	else
		printf("Error!\n");
	return 0;

}
