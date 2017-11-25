#include "stdafx.h"
#include <stdlib.h>
#include <string.h>
#define BUFFER_SIZE 1024



int main()
{
	char buffer[BUFFER_SIZE];
	char string_first[BUFFER_SIZE];
	char string_second[BUFFER_SIZE] = "test";
	char *result = NULL;
	FILE *task1;
	errno_t err = fopen_s(&task1, "C:\\Users\\uc2\\Desktop\\task1.txt", "r");
	
	if (err)
		printf_s("The file task1.txt was not opened\n");
	else
	{
		while (fgets(string_first, BUFFER_SIZE, task1) != NULL)
		{
			result = strstr(string_first, string_second);
			if (result != 0)
				printf("%s\n", string_first);
		}
	}
	
	fclose(task1);
	return 0;
}
