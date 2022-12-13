#include "main.h"

/**
 * jack_bauer - prints every min
 */
void jack_bauer(void)
{
	int min, hr;

	for (hr = 0; hr <= 23; hr++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchar(min);
			_putchar('\n');
		}
	}
}
