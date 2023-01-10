#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - function pointing to new copied memory allocation
 * @str: string
 * Return: pointer or null
 **/
char *_strdup(char *str)
{
	char *a;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	a = (char *)malloc(sizeof(char) * (i + 1));

	if (a == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		a[j] = str[j];

	return (a);
}
