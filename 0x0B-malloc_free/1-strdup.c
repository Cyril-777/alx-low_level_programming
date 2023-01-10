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
	if (str == NULL)
	{
		return (NULL);
	}
	int len = strlen(str);

	char *dup = malloc(len + 1);

	if (dup == NULL)
	{
		return (NULL);
	}

	strcpy(dup, str);
	return (dup);
}
