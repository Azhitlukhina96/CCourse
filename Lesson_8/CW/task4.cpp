
#include "stdafx.h"
#include <stdlib.h>

int main()
{
	char *р = NULL;
	р = (char*)malloc(25);
	free(р);
	return 0;
}
