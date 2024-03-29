#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: str printed between the strings
 * @n: num of args
 **/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);

		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");

		if (i < n - 1)
			if (separator != NULL)
				printf("%s", separator);
	}

	va_end(ap);
	printf("\n");
}
