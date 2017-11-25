#include "stdafx.h"
#include <stdlib.h>
#include <time.h>


int colichestvo_A(char string[], int string_len)
{
	int colichestvo_A = 0;
	for (int i = 0; string[i] != '\0'; i++)
	{
		printf("%c", string[i]);
		if (string[i] == 'A')
		{
			colichestvo_A++;
		}

	}
	return colichestvo_A;

}

int main()
{
	char *my_string_1 = NULL;
	int string_len = 100;
	my_string_1 = (char *)malloc(sizeof(char)*string_len);

	char in_char = 0;
	int position = 0;

	scanf_s("%s", my_string_1, 100);

	/*
	while ((in_char = getchar()) != EOF && position < string_len - 1)
	{
		my_string_1[position] = in_char;
		if (position == string_len - 2)
		{
			my_string_1[string_len - 1] = '\0';
			break;
		}
		position++;

	}
	*/


	printf("\nA: %d\n", colichestvo_A(my_string_1, string_len));

	return 0;
}
