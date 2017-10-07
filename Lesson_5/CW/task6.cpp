// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#define sum( a , b ) (a + b)


int main()
{
	int value_1 = 0;
	int value_2 = 0;
	int result = 0;
	scanf_s("%d", &value_1);
	scanf_s("%d", &value_2);
	result = sum(value_1, value_2);
	printf("sum= %d\n", result);
}
