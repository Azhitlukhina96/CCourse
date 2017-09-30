
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

	for (counter = range; counter > 0; counter--)
	{
       printf("%d\n", counter);
	}
		

}
