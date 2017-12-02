#include "stdafx.h"
#include <stdlib.h>
#include <string.h>
#define BUFFER_SIZE 1024
using namespace std



int main()
{

	FILE *array2;
	float value = 0;
	float *row = NULL;
    row = (float*)malloc(sizeof(float));
	float *brow = NULL;
	int size = 1;
	int position = 0;
	errno_t err = fopen_s(&array2, "C:\\Users\\uc2\\Desktop\\array2.txt", "r");
	if (err)
		printf_s("The file array2.txt was not opened\n");
	else
	{
		while (fscanf_s(array2, "%f", &value) != EOF) {
			if (position==size)
			{
				size = size * 2;
				brow = (float *)realloc(row, size*sizeof(float));
				for (int i = 0; i < position; i++)
					brow[i] = row[i];
				row = brow;
			}
			row[position] = value;
			position++;
			printf("%f\n", value);
		}
	}
	

	
		return 0;
}
