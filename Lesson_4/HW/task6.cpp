// ConsoleApplication14.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "conio.h"
#include <iostream>
#include "locale.h"


void rekurs(int a)
{
	if (a != 0)
		rekurs(a / 2);
	else return;
	printf("%d", a % 2);
	return;
}

int my_func(int a)
{
	int  i, mass[99];
	for (i = 0; i < 99; i++)
	{
		mass[i] = 0;
	}
	i = 0;
	while (a != 0)
	{
		if (a % 2 == 0)
		{
			mass[i] = 0;
		}
		else
		{
			mass[i] = 1;
		}
		a = a >> 1;
		i++;
	}
	i = i - 1;
	for (; i >= 0; i--)
		printf("%d", mass[i]);
	return(0);
}

int main() 
{
	int a;
	scanf_s("%d", &a);
	printf("result:");
	rekurs(a);
	printf("\n");
	return 0;
}
