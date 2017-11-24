#include "stdafx.h"
#include <stdio.h>
#include <string.h>
int main()
{
	char my_string[300];
	fgets(my_string, 300, stdin);

	char my_string_1[300];
	int n = 0;
	
	for (int i = 0; i < strlen(my_string); i++)
	{
		if ((my_string[i] >= 'A' && my_string[i] <= 'Z'))
			printf("%c ", my_string[i]);
		else
		{
			my_string_1[n] = my_string[i];
			n++;
		}
	}
	printf("\n");
	for (int i = 0; i < n; i++)
		printf("%c ", my_string_1[i]);
	printf("\n");
	return 0;
}
