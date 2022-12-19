#include "main.h"

/**
 * _atoi - converts a string to an int
 * @s: string
 * Return: ints
 */

int _atoi(char *s)
{
	int n, length, ncount, multi, x, neg;

	length = 0;
	x = 0;
	ncount = 0;
	multi = 1;
	neg = 1;
	n = 0;

	while (s[length] != '\0')
	{
		if (s[length] >= '0' && s[length] <= '9')
		{
			ncount++;
			if (!(s[length + 1] >= '0' && s[length + 1] <= '9'))
				break;
		}
		length++;
	}

	for (; ncount > 1; ncount--)
	{
		multi *= 10;
	}

	for (; x <= length; x++)
	{
		if (s[x] == '-')
			neg *= -1;
		else if (s[x] <= '9' && s[x] >= '0')
		{
			n += (s[x] - '0') * multi * neg;
			multi /= 10;
		}
	}

	return (n);
}
