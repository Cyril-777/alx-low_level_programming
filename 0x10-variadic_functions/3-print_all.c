#include "variadic_functions.h"
/**
 * print_all - prints anything.
 * @format: types of args
 **/
void print_all(const char * const format, ...)
{
	va_list pa;
	unsigned int i = 0, b, c = 0;
	char *str;
	const char t_arg[] = "cifs";

	va_start(pa, format);
	while (format && format[i])
	{
		b = 0;
		while (t_arg[b])
		{
			if (format[i] == t_arg[b] && c)
			{
				printf(", ");
				break;
			} b++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(pa, int)), c = 1;
			break;
		case 'i':
			printf("%d", va_arg(pa, int)), c = 1;
			break;
		case 'f':
			printf("%f", va_arg(pa, double)), c = 1;
			break;
		case 's':
			str = va_arg(pa, char *), c = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		} i++;
	}
	printf("\n"), va_end(pa);
}
