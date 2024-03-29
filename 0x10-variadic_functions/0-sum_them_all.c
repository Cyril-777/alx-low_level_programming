#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: num of args
 * Return: sum
 **/
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
