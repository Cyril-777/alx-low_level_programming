#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: ptr to binary
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is
 * not 0 or 1
 * b is NULL
 **/
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0, i = 0;

	if (b == NULL)
		return (0);
	while (b[i])
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		n <<= 1;
		n += b[i] - '0';
		i++;
	}
	return (n);
}
