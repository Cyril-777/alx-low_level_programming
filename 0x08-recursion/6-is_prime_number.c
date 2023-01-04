#include "main.h"

/**
 * is_prime - detects if int is a prime number.
 * @n: the num
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 **/
int is_prime_number(int n)
{
	int i;

	if (n <= 1)
		return 0;

	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
			return 0;
	}
	return (1);
}
