#include "main.h"
/**
 * more_numbers - prints numbers
 */

void more_numbers(void)
{
	char c, n;
	int i = 0;

	while (i < 10)
	{
		for (n = 0; n <= 14; n++)
		{
			c = n;
			if (n > 9)
			{
				_putchar('1');
				c = n % 10;
			}
			_putchar ('0' + c);
		}
		_putchar('\n');
		i++;
	}
}
