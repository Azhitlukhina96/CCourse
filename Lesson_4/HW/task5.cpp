// ConsoleApplication14.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"



int main()
{
	int a = 0;
	int	count = 0;
	printf("Vvedite luboe chislo:");
	scanf_s("%d", &a);
	for (int i = 2; i<a; i++) 
	{
		if (a%i == 0) count++;
	}
	if (count == 0)
		printf("chislo prostoe\n");
	else
		printf("Chislo ne prostoe\n");
	return 0;
}
