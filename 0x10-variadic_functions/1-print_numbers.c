#include "variadic_functions.h"
/**
 * print_numbers - prints numbers.
 * @separator: str printed between the numbers
 * @n: num of args
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;

	va_start(ap, n);

	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}

	va_end(ap);
	printf("\n");
}
