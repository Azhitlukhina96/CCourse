#include "stdafx.h"


static int value=0;

void foo() {
	value++;
	printf("%d\n", value);
	value++;
}
int main()
{
	for (int i = 0; i < 25; i++)
		foo();
	return 0;
}
