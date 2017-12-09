#include "stdafx.h"
#include <stdlib.h>
#include <string.h>
#define BUFFER_SIZE 1024

struct student 
{
	char name[20];
	char surname[30];
	int birthday;
	int id;
};


int main()
{
	FILE *student;
	char buffer[BUFFER_SIZE];
	struct student best_student;
	errno_t err = fopen_s(&student, "C:\\Users\\uc2\\Desktop\\student.txt", "r");
	if (err)
	{
		printf_s("The file student.txt was not opened\n");
	}
	else
	{
		int line_id = 1;
		while (fscanf_s(student, "%1024s",  &buffer, BUFFER_SIZE) != EOF)
		{
			//printf("%s\n", buffer);
			// добавляете номер считываемой строки

			if (line_id == 1)
			{
				strcpy_s(best_student.name, buffer);
			}
			
			if (line_id == 2)
			{
				strcpy_s(best_student.surname, buffer);
			}
			
			if (line_id == 3)
			{
				best_student.birthday = atoi(buffer);
			}
			if (line_id == 4)
			{
				best_student.id= atoi(buffer);
			}
			
			line_id++;

			

			//best_student.id = 121;
			//printf("%d\n", best_student.id);
			
		}
	}

	printf("%s\n", best_student.name);
	printf("%s\n", best_student.surname);
	printf("%d\n", best_student.birthday);
	printf("%d\n", best_student.id);
	

	return 0;
}

