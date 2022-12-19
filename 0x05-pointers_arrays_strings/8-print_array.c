#include "main.h"

/**
 * print_array - prints array elements
 * @a: first arg
 * @n: second arg
 */
void print_array(int *a, int n)
{
	int *p = a, b;

	for (b = 0; b < n; b++)
	{
		if (b == 0)
			printf("%d", p[b]);
		else if (b > 0)
		{
			printf(", ");
			printf("%d", p[b]);
		}
	}
	printf("%c", '\n');
}
