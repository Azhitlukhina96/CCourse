// ConsoleApplication12.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <math.h>


int main()
{
	int min = 0;
	int max= 0;
	int x = 0; 
	printf("Enter min:\n");
    scanf_s("%d", &max);
	printf("Enter max:\n");
    scanf_s("%d", &max);
	if (min > max)
	{
		printf("Incorrect! min > max");
		return 0;
	}
	for (int i = min; i <= max; i++)
	{
		x = x + i;
	}
	printf("Sum:%d \n", x);
	return 0;
}
