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

struct cloud
{
	struct point points[10];
};

float distance(point point1, point point2)
{
	float result = 0;
	result = sqrt((point1.x - point2.x)*(point2.x - point1.x) + sqrt(point2.y - point1.y)*(point2.y - point1.y));
	printf_s("sqrt((point1.x - point2.x)*(point2.x - point1.x) + sqrt(point2.y - point1.y)*(point2.y - point1.y))= %f\n", &result);
	return result;
}

int main()
{
	FILE *cloud_file;
	char buffer[BUFFER_SIZE];

	//struct point best_point;
	struct cloud my_cloud;
	struct point my_coord;

	for (int i = 0; i < 10; i++)
	{
		my_cloud.points[i].x = 0;
		my_cloud.points[i].y = 0;
	}


	errno_t err = fopen_s(&cloud_file, "C:\\Users\\1\\Desktop\\cloud.txt", "r");

	if (err)
		printf_s("The file cloud.txt was not opened\n");
	else
	{
		int counter = 0;
		while (fscanf_s(cloud_file, "%f %f", &my_cloud.points[counter].x, &my_cloud.points[counter].y) != EOF)
		{

			printf_s("x: %f", my_cloud.points[counter].x);
			printf_s("    y: %f\n", my_cloud.points[counter].y);
			

			counter++;
		}
	};

	//написать функцию ввода координаты x,y с клавиатуры. (scan_f) --> my_coord;


	//вызвать функцию через for(10) distance(my_coord, my_cloud.points[i])

	

	//float distance;
	_getch();
	return 0;
}

