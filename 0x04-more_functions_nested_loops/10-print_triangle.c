#include "main.h"

/**
 * print_triangle - obv
 * @size : int type
 */
void print_triangle(int size)
{
	int i = 1, s;

	while (i <= size && size > 0)
	{
		s = 0;
		while (s < size - i)
		{
			_putchar(' ');
			s++;
		}
		s = 0;
		while (s < i)
		{
			_putchar('#');
			s++;
		}
		_putchar('\n');
		i++;
	}
	if (i == 1)
		_putchar('\n');
}
