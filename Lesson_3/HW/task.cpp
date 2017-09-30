//поиск точки пересечения 2-x прямых.

// ConsoleApplication9.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <math.h>


int main()
{
	float a = 0;
	float b = 0;
	float a1 = 0;
	float b1 = 0;
  float result = 0;
  printf("Vvedi a\n");
	scanf_s("%f", &a);
	printf("Vvedi b\n");
	scanf_s("%f", &b);
	printf("Vvedi a1\n");
	scanf_s("%f", &a1);
	printf("Vvedi b1\n");
	scanf_s("%f", &b1);

  if (a == a1)
	{
		printf("Pryamyye parallel");
  }

	else
          result = (-b + b1) / (a - a1);
	  printf("(-b + b1) / (a-a1) =%f\n", result);
	  result = (-b + b1) / (a - a1)*(a + b);
	  printf("(-b + b1) / (a - a1)*(a+b)=%f\n", result);

	return 0;

}
