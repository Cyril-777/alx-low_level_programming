#include "main.h"

/**
 * swap_int - func to swap the values of 2 ints
 * @a: first int
 * @b: second int
 */

void swap_int(int *a, int *b)
{
	int i = *a;

	*a = *b;
	*b = i;
}

