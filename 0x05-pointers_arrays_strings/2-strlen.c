#include "main.h"

/**
 * _strlen - man strlen
 * @s: arg
 * Return: length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length += 1;
		s++;
	}
	return (length);
}
