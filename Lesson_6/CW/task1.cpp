#include "stdafx.h"
#include "math.h"



int NOD (int a, int b)
{

	int var1 = 0;
	int var2 = 0;
	if (a > b)
	{
		var1 = a;
		var2 = b;
	}
	else
	{
		var1 = b;
		var2 = a;
	}

	while (var1%var2)
	{
		var2 = var1%var2;
	}
	return var2;
}


int main()
{
	int a = 0;
	int b = 0;
	printf("Vvedi a:\n");
	scanf_s("%d", &a);
	printf("Vvedi b:\n");
	scanf_s("%d", &b);
	int result = NOD (a,b);
	printf_s("NOD: %d\n", result);
	return 0;
}

