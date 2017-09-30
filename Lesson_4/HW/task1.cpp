// поиск возраста человека

// ConsoleApplication9.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <math.h>


int main()
{
	int M = 0; 
	int H = 0; 
	int Md = 0;
    int Hd = 0;
	int iM = 0;
	int iH = 0;
	int K = 0;
	int selestor = 0;
	printf("Enter birth date month, year");
	printf("M\n");
	scanf_s("%d", &M);
	printf("H\n");
	scanf_s("%d", &H);
	printf("Enter check date month, year");
	printf("iM\n");
	scanf_s("%d", &iM);
	printf("iH\n");
	scanf_s("%d", &iH);
	/*
	printf("Md\n");
	scanf_s("%d", &Md);
	printf("Hd\n");
	scanf_s("%d", &Hd);
	*/

	printf("Select 1 , 0 ...\n");
	scanf_s("%d", &selestor);


	if ((M <= 0) && (M > 12))
	{
		printf("Incorrect birth month!\n");
		return 0;
	}

	if (H <=0)
	{
		printf("Incorrect birth year!\n");
		return 0;
	}


	if ((iM <= 0) && (iM > 12))
	{
		printf("Incorrect check month!\n");
		return 0;
	}

	if (iH<=0)
	{
		printf("Incorrect check year!\n");
		return 0;
	}


	switch (selestor)
	{
		case 1:
			Md = iH - M; // Текущий месяц - месяц рождения
			Hd = iM - H;
			if (Md < 0)
			{
				Md = 12 - Md;
				Hd = Hd - 1;
			}
			printf("%d - %d\n", Hd, Md);
			break;
		case 0:
			//iM = 12 - iN;
			break;

		default:
			printf("Unexpected symbol!\n");
			break;
	}

	// Это задание на дом


	return 0;

}
