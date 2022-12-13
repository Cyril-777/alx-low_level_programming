#include "main.h"
/**
 * print_last_digit - prints last dig
 * @c: dig
 * Return: value
 */
int print_last_digit(int c)
{
	int lastdig = c % 10;

	_putchar(lastdig + '0');
	return (0);
}
