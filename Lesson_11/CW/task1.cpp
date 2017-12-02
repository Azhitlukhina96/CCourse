#include "stdafx.h"
#include <stdlib.h>
#define BUFFER_SIZE 1024

int main()
{ 
	
	FILE *matrix_4;	
	char buffer[BUFFER_SIZE];
	int N = 0;
	errno_t err = fopen_s(&matrix_4, "C:\\Users\\uc2\\Desktop\\matrix_4.txt", "r");

	if (err)
		printf_s("The file matrix_4.txt was not opened\n");
	else
	{
		while (fgets(buffer, BUFFER_SIZE, matrix_4) != NULL) {
			printf("%s", buffer);
			break;
		}

	}
	/*
	float **matrix2d;
	matrix2d = (float **)malloc(MATRIX_SIZE * sizeof(float*));
	for (int i = 0; i < N; i++)
		matrix2d[i] = (float *)malloc(N * sizeof(float));
	if (err)
		printf_s("The file matrix_4.txt was not opened\n");
	else
	{
		while (fgets(buffer, MATRIX_SIZE, matrix_4) != NULL) {
			printf("%s", buffer);
			break;
		}

	}
	for (int i = 0; i < MATRIX_SIZE; i++)
		for (int j = 0; j < MATRIX_SIZE; j++)
			matrix2d[i][j] = i + j;
	for (int i = 0; i < MATRIX_SIZE; i++)
	{
		for (int j = 0; j < MATRIX_SIZE; j++)
			printf("%f\t", matrix2d[i][j]);
		printf("\n");
	}
	fclose(matrix_4);
	*/

	
	return 0;
}
