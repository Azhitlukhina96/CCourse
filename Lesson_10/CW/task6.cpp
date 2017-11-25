#include "stdafx.h"
#include <stdlib.h>
#include <string.h>
#define BUFFER_SIZE 1024



int main()
{
	char buffer[BUFFER_SIZE];
	char string_first[BUFFER_SIZE];
	char string_second[BUFFER_SIZE] = "Mick";
	char *result = NULL;
	FILE *task2;
	errno_t err = fopen_s(&task2, "C:\\Users\\uc2\\Desktop\\task2.txt", "r");

	if (err)
		printf_s("The file task1.txt was not opened\n");
	else
	{
		while (fgets(string_first, BUFFER_SIZE, task2) != NULL)
		{
			result = strstr(string_first, string_second);
			if (result != 0)
				printf("%s\n", string_first);
		}
	}

	fclose(task2);
	return 0;
}
