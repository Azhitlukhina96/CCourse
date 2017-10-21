// Задача №2
#include "stdafx.h"
#include <math.h>

int main()
{
	int sum = 0;
	int new_valuc = 0;
	while (1)
	{
		scanf_s("%d", &new_valuc);
		if (new_valuc >= sum)
		{
			sum = sum + new_valuc;
			printf("%d\n", sum);
		}
		else
		{
			printf("incorrect");
		}

		
	}
	return 0;
}


