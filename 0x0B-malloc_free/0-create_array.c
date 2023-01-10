#include <stdlib.h>
/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size
 * @c: init
 * Return: *array or null
 **/
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	a = malloc(sizeof(c) * size);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
