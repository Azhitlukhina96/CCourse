#include "stdafx.h"
#include <stdlib.h>

struct student {
	char name[20];
	char surname[30];
	float average_rating;
	int birthday;
	int id;
};

void print_student_info(struct student student_info)
{
	printf("ID: %d\n", student_info.id);
	printf("Name: %20s\n", student_info.name, 20);
	printf("Surname: %30s\n", student_info.surname, 30);
	printf("Rating: %f\n", student_info.average_rating);
	printf("Birthday: %d\n", student_info.birthday);
}

void print_students_array(struct student student_info_array[], int size)
{
	for (int i = 0; i < size; i++)
		print_student_info(student_info_array[i]);
}

void update_student_info(struct student *student_info)
{
	int new_id = 0;
	scanf_s("%d", &new_id);
	student_info->id = new_id;

	scanf_s("%20s", &student_info->name, 20);

	scanf_s("%20s", &student_info->surname, 30);

	float new_average_rating = 0;
	scanf_s("%f", &new_average_rating);
	student_info->average_rating = new_average_rating;

	int new_birthday = 0;
	scanf_s("%d", &new_birthday);
	student_info->birthday = new_birthday;
}
int main()
{
	//struct student student_info;
	//update_student_info(&student_info);
	//print_student_info(student_info);
	
	int size = 1;
	int position = 0;
	struct student *student_info_array_buf = NULL;
	scanf_s("%d", &size);
	struct student *student_info_array;
	student_info_array = (student *)malloc(sizeof(student)*size);

	int out_flag = 0;
	while (1)
	{
		printf("CONTINUE? (Yes)>0; (No)<0");
		scanf_s("%d", &out_flag);
		if (out_flag < 0)
		{
			break;
		}

		if (position == size)
		{
			size = size * 2;
			student_info_array_buf = (student *)realloc(student_info_array, size*sizeof(student));
			for (int i = 0; i < position; i++)
				student_info_array_buf[i] = student_info_array[i];
			student_info_array = student_info_array_buf;
		}

		update_student_info(&student_info_array[position]);
		print_student_info(student_info_array[position]);
		position++;		
	}	
	print_students_array(student_info_array, position);

	return 0;
}
