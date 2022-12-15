#include <unistd.h>

/**
 * _putchar - writes the character c
 * @c: the character
 * Return: 1 prob
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
