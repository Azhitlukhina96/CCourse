#include "stdafx.h"
#include <stdlib.h>
#include <string.h>
#include <math.h>
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

float distance(struct point point1, struct point point2)
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

	struct point best_point;
	struct cloud my_cloud;

	best_point.x = 0;
	best_point.y = 0;


	errno_t err = fopen_s(&cloud_file, "C:\\Users\\uc2\\Desktop\\cloud.txt", "r");

	if (err)
		printf_s("The file cloud.txt was not opened\n");
	else
	{
		int counter = 0;
		while (fscanf_s(cloud_file, "%f %f", &best_point.x, &best_point.y) != EOF)
		{
			my_cloud.points[counter] = best_point;
			printf("x: %f\n", my_cloud.points[counter].x);
			printf("y: %f\n", my_cloud.points[counter].y);
			
			counter++;
			}
		}

	return 0;
}
