#include "stdafx.h"
#include <stdlib.h>
#include <string.h>
#define BUFFER_SIZE 1024

struct student
{
	char name[20];
	char surname[30];
	float average_rating;
	int birthday;
	int id;
};


int main()
{
	FILE *students =NULL;

	struct student buffer;

	buffer.average_rating = 0;
	buffer.birthday = 0;
	buffer.id = 0;
	for (int i = 0; i < 50; i++)
	{
		buffer.name[i] = 0;
		buffer.surname[i] = 0;
	}

	struct student group[7];

	errno_t err = fopen_s(&students, "C:\\Users\\uc2\\Desktop\\students.txt", "r");
	if (err)
	{
		printf_s("The file students.txt was not opened\n");
	}
	else
	{
		int counter = 0;
		while (fscanf_s(students, "%50s %50s %f %d %d", buffer.name, 50, buffer.surname, 50, &buffer.average_rating, &buffer.birthday, &buffer.id) != EOF)
		{
			group[counter] = buffer;
			printf("%s\n", group[counter].name);
			printf("%s\n", group[counter].surname);
			printf("%f\n", group[counter].average_rating);
			printf("%d\n", group[counter].birthday);
			printf("%d\n", group[counter].id);

			counter++;
		}
	}

	//поиск студента с наибольшим значением average_rating

	float max_average_rating = 0;
	struct student best_student;

	for (int i = 0; i < 7; i++)
	{
		if (max_average_rating < group[i].average_rating)
		{
			max_average_rating = group[i].average_rating;
			best_student = group[i];
		}
	}


	// поиск самого молодого студента

	int min_birthday = 22222222;
	struct student young_student;
	
	for (int i = 0; i < 7; i++)
	{
		if (min_birthday > group[i].birthday)
		{
			min_birthday = group[i].birthday;
			young_student = group[i];

		}
	}

	


	// порядок убывания average_rating

	int waning_average_rating = 0;
	
	struct student temp_student;

	
	
	printf("max_average_rating= %f\n ", max_average_rating);
	printf("min_birthday= %d\n", min_birthday);
	printf("waning_average_rating= |%f\n|", waning_average_rating);

	fclose(students);

	return 0;
	
}

