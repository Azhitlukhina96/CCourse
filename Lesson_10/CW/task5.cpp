#include "stdafx.h"
#include <stdlib.h>
#include <string.h>
#define BUFFER_SIZE 1024



int main()
{
	char buffer[BUFFER_SIZE];
	char string[BUFFER_SIZE];
	int string_len = 0;
	scanf_s("%s", string, BUFFER_SIZE);

	char *result = NULL;
	FILE *task2;
	errno_t err = fopen_s(&task2, "C:\\Users\\uc2\\Desktop\\task2.txt", "r");
	
	if (err)
		printf_s("The file task2.txt was not opened\n");
	else
	{
		fscanf_s("%s %s", first_name, BUFFER_SIZE, string BUFFER_SIZE);
		while (fgets(string_len, BUFFER_SIZE, task2) != NULL)
		{
			result= strlen(string);
			if (result != 0)
			{
				printf("%s\n", string_len);
			}
		}
	}
	
	fclose(task2);
	return 0;
}

