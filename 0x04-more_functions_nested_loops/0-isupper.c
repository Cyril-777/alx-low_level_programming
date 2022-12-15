#include "main.h"

/**
 * _isupper - checks if character is uppercase
 * @c: int
 * Return: 1 if uppercase, 0 if not
 */
int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (0);
	else
		return (1);
}
