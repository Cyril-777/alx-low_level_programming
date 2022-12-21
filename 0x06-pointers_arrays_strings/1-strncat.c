#include "main.h"

/**
 * _strncat - concatenates two strings
 * @src: source
 * @dest: destination
 * @n: The length of int
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}
	for (c = 0; src[c] != '\0' && c < n; c++)
	{
		dest[i + c] = src[c];
	}
	dest[i + c] = '\0';
	return (dest);
}

