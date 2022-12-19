#include "main.h"

/**
 * rev_string - fuc to reverse a string.
 *@s: arg
 */

void rev_string(char *s)
{
	int length = 0;
	int i = 0;
	char *cp = s;
	int x;
	int a = 0;
	char c;

	while (*cp != '\0')
	{
		cp++;
		length++;
	}

	i = length - 1;
	for (; a < ((i / 2) + 1); a++)
	{
		x = (i - a);
		c = s[a];
		s[a] = s[x];
		s[x] = c;
	}
}
