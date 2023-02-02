#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: num
 * @index: index, starting from 0 of the bit you want to get
 * Return: the value of the bit at index index or -1 if an error occured
 **/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int c;

	if (index > 63)
		return (-1);

	c = 1 << index;
	if (n & c)
		return (1);
	else
		return (0);
}
