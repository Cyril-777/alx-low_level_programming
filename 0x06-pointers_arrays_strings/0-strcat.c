#include "main.h"
/**
 * _strcat - conc 2 strings
 * @src: source string
 * @dest: destination string
 *
 * Return: pointer to the resulting string dest.
 **/

char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
