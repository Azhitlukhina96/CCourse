#include "stdafx.h"
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <conio.h>
#define BUFFER_SIZE 1024

struct point
{
	float x;
	float y;
};

void print_my_coord(struct point my_coord)
{
	printf("x: %f\n", my_coord.x);
	printf("y: %f\n", my_coord.y);

}

void print_points_dictance_array(struct point my_coord_array[], int size)
{
	for (int i = 0; i < size; i++)
		print_my_coord (my_coord_array[i]);
}




//Сортировка массива пузырьком
void sort(float points_distances_array[], int *points_id, int size)
{
	for (int i = 0; i < size - 1; i++) 
	{
		for (int j = 0; j < size - i - 1; j++) 
		{
			if (points_distances_array[j] > points_distances_array[j + 1])
			{
				float temp = points_distances_array[j];
				int temp_id = points_id[j];
				points_distances_array[j] = points_distances_array[j + 1];
				points_id[j] = points_id[j + 1];

				points_distances_array[j + 1] = temp;
				points_id[j + 1] = temp_id;
			}
		}
	}
}


struct cloud
{
	struct point points[10];
};

float distance(point point1, point point2)
{
	float result = 0;
	result = sqrt((point1.x - point2.x)*(point1.x - point2.x) + (point2.y - point1.y)*(point2.y - point1.y));
	printf_s(" result = %f\n", result);
	return result;
}

int main()
{
	FILE *cloud_file;
	char buffer[BUFFER_SIZE];
	int size = 10;

	//struct point best_point;
	struct cloud my_cloud;

	for (int i = 0; i < 10; i++)
	{
		my_cloud.points[i].x = 0;
		my_cloud.points[i].y = 0;
	}


	errno_t err = fopen_s(&cloud_file, "C:\\Users\\uc2\\Desktop\\cloud.txt", "r");

	if (err)
		printf_s("The file cloud.txt was not opened\n");
	else
	{
		int counter = 0;
		while (fscanf_s(cloud_file, "%f %f", &my_cloud.points[counter].x, &my_cloud.points[counter].y) != EOF)
		{
			printf_s("x: %f", my_cloud.points[counter].x);
			printf_s("  y: %f\n", my_cloud.points[counter].y);
			counter++;
		}
	};

	//функция ввода координаты x,y с клавиатуры
	struct point my_coord;
	printf("Vvedi x: \n");
	scanf_s("%f", &my_coord.x);

	printf("Vvedi y: \n ");
	scanf_s("%f", &my_coord.y);

	print_my_coord(my_coord);

	float points_distance;
	float distances_array[10];
	int points_id[10];

	for (int i = 0;i < 10;i++)
	{
		points_distance = distance(my_coord, my_cloud.points[i]); 
		printf("%f\n", points_distance);
		distances_array[i] = points_distance;
		points_id[i] = i;
	}




	
	sort(distances_array, points_id, size);
	for (int i = 0;i < 10;i++)
	{
		printf("%d: %f\n", points_id[i], distances_array[i]);
	}

	/*
	// Простой вывод результата
	print_points_dictance_array(my_cloud.points, size);
	//вывод отсортированного массива
	print_points_dictance_array(distances_array, size);
	*/
	
	_getch();
	return 0;
}

