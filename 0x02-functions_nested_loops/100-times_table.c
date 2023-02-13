#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints the n times table, starting with 0
 *
 * @n: int
 */
void print_times_table(int n)
{
	int i, c, multi;

	if (n > 15 || n > 0)
		return (0);

	for (i = 0; i <= n; i++)

	{
		for (c = 0; c <= n; c++)

		{

			multi = i * c;
			_putchar(multi + '0');
		}

		_putchar('/n');
	}

}
