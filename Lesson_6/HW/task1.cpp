#include "stdafx.h"
#include "math.h"
#include <iostream>
#define N 3 


int main()
{

	int A[N];
	int B[N];

	for (int i = 0; i < N; i++)
	{
		A[i] = rand() % 50 - 24;
	}
	for (int i = 0; i < N; i++)
	{
		B[i] = rand() % 50 - 24;
	}

	printf("\n A: (%d, %d, %d);\n", A[0], A[1], A[2]);
	printf("\n B: (%d, %d, %d);\n", B[0], B[1], B[2]);

	int result[N];

	result[0] = (A[1] * B[2] - A[2] * B[1]);
	result[1] = (A[2] * B[0] - A[0] * B[2]);
	result[2] = (A[0] * B[1] - A[1] * B[0]);

	printf("\n [A,B] : (%d, %d, %d);\n \n", result[0], result[1], result[2]);


	return 0;
}
