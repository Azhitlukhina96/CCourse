#include "stdafx.h"
#include <stdlib.h>
#include <string.h>
#define BUFFER_SIZE 1024



int main()
{
	char string[BUFFER_SIZE];
	int string_len = 0;
	char string_first_name[BUFFER_SIZE];
	int result = NULL;
	FILE *task2;
	errno_t err = fopen_s(&task2, "C:\\Users\\uc2\\Desktop\\task2.txt", "r");

	if (err)
		printf_s("The file task2.txt was not opened\n");
	else
	{
		while (fscanf_s(task2, "%100s %100s", string_first_name, BUFFER_SIZE, string, BUFFER_SIZE) != EOF)
		{
			result = strlen(string);
			/*
			if (result != 0)
			{
				printf("%s %d\n", string, result);
			}
			*/
			printf("%s %d\n", string, result);
		}
	}

	fclose(task2);
	return 0;
}
