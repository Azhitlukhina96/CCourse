#include "stdafx.h"


void myFunction() {
	static int value;
	printf("%d\n", value);
	value++;
}
int main()
{
	for (int i = 0; i < 25; i++)
		myFunction();
	return 0;
}

