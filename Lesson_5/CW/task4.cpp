// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"



int is_positive(float chislo)
{
	if (chislo > 0)
	{
		return 1;
	}

	else
		// иначе 0
		printf("chislo negative");
	return (-1);

}

int main()
{
	int chislo = 0;
	printf ("Vvedi chislo:\n");
	scanf_s("%d", &chislo);
	int result = is_positive(chislo);
	printf("is_positive = %d\n", chislo, result);


	return 0;
}

