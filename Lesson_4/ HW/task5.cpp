
// ConsoleApplication9.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <math.h>


int main()
{
	int flag = 0;

while (1)
	{
		scanf_s("%d", &flag);
		if (flag == 2)
			break;
		printf("%d\n",flag*flag);
		
	}

return 0;

}
