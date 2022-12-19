#include "main.h"

/**
 * puts2 - prints every other char
 * @str: arg
 */

void puts2(char *str)
{
	char *p = str;
	int length = 0;
	int c;

	while (*p != '\0')
	{
		length++;
		p++;
	}

	for (c = 0; c <= (length - 1); c++)
	{
		if (c % 2 == 0)
			_putchar(str[c]);
	}
	_putchar('\n');
}
