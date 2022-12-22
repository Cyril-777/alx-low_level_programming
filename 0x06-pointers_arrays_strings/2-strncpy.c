#include "main.h"
/**
 * *_strncpy - copies a string
 * @src: source
 * @dest: destination
 * @n: lenght of digit
 *
 * Return: pointer to strng dest
 **/

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return dest;
}
