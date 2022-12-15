#include "main.h"
/**
 * print_most_numbers - prints from 0 to 9, except 2 and 4
 * Return: 0
 */
void print_most_numbers(void)
{
	char c = 0;

	while (c <= 9)
	{
		if (c != 2 && c != 4)
		{
			_putchar(c + '0');
		}
		c++;
	}
	_putchar('\n');
}
