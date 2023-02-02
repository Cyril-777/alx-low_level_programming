#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: ptr to an int
 * @index: index
 * Return: 1 if it worked, or -1 if an error occurred
 **/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int nnn;

	if (index > 63)
		return (-1);
	nnn = 1 << index;
	*n &= ~nnn;
	return (1);
}
