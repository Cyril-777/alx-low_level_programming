#include "main.h"

/**
 * _strcpy - copy pointed string
 * @dest: first arg
 * @src: sec arg
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	int x = 0;
	int z = 0;

	while (*(src + x) != '\0')
	{
		x++;
	}

	for (; z < x; z++)
	{
		dest[z] = src[z];
	}

	dest[x] = '\0';

	return (dest);
}
