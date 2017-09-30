
// ConsoleApplication9.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <math.h>


int main()
{
	int range = 0;
	printf("Enter range:\n");
	scanf_s("%d", &range);


	for (int i = 0; i < range; i++)
	{
		if (i < 10)
			continue;
       printf("%d\n", i);
	}
		

}
