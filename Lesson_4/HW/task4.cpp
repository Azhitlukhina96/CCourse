// ConsoleApplication14.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <math.h>

int main()
{
	int a = 0;
	int x = 0;
	int result = 0;
	printf("Enter a:\n");
	scanf_s("%d", &a);
	printf("Enter x:\n");
	scanf_s("%d", &x);
	if (a > 0)
	{
		result = powf (a,x);
		printf("%d\n", result);
	}
	else
		printf("Error!\n");
	return 0;
}
