// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int my_pow(int a, int x) // Возведение a в степень x
{
	int local_result = 1;
	for (int i = 1; i < x; i++)
	{
		local_result = local_result * a;
	}
	return local_result;
}

int main()
{
	int a = 0;
	int x = 0;
	int mresult = 0;
	printf("Vvedi a\n");
	scanf_s("%d", &a);
	printf("Vvedi x\n");
	scanf_s("%d", &x);
	if (a > 0)
	{
		mresult = my_pow(a, x);
		printf("%d\n", mresult);
	}
	else
		printf("Error!\n");
	return 0;
}

