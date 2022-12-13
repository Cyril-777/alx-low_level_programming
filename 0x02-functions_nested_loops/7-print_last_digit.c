#include "main.h"
/**
 * print_last_digit - prints last dig
 * @c: dig
 * Return: value
 */
int print_last_digit(int c)
{
	int lastdig = c % 10;

	if (lastdig < 0)
		lastdig *= -1;
	_putchar(lastdig + '0');
	return (0);
}
