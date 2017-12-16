#include "stdafx.h"
#include <stdlib.h>
#include <string.h>
#define BUFFER_SIZE 1024



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
	printf("Name: %s\n", student_info.name);
	printf("Surname: %s\n", student_info.surname);
	printf("Rating: %f\n", student_info.average_rating);
	printf("Birthday: %d\n", student_info.birthday);
}
int main()
{
	struct student student_info;
	printf("Vvedi ID: \n");
	scanf_s("%d", &student_info.id);
	
	printf("Vvedi Name: \n ");
	scanf_s("%20s", &student_info.name, 20);
	
	printf("Vvedi Surname: \n ");
	scanf_s("%20s", &student_info.surname, 20);
	
	printf("Vvedi Rating: \n ");
	scanf_s("%f", &student_info.average_rating);
	
	printf("Vvedi Birthday: \n ");
	scanf_s("%d", &student_info.birthday);
	
	print_student_info(student_info);
	return 0;
}
