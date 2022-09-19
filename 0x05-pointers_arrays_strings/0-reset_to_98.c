#include "main.h"

/**
 *main - a function that takes a pointer to an int as parameter.
 *
 *@n: pointer to integer n to be updated as the value it point to.
 */
void reset_to_98(int *n)
{
	int x = 0;
	int *n = &x;
	*n = 98;
}

