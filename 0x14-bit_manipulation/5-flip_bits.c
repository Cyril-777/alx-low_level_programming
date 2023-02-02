#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number to another
 * @n: first num
 * @m: sec num
 * Return: the number of bits
 **/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bit;
	unsigned int v = 0;

	bit = n ^ m;
	while (bit > 0)
	{
		v++;
		bit &= (bit - 1);
	}
	return (v);
}
