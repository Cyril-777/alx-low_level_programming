#include "main.h"

/**
 * rot13 - encodes a string into rot13
 * @s: string to encode
 * Return: s
 */
char *rot13(char *s)
{
	int i, x;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; *(s + i); i++)
	{
		for (x = 0; x < 52; x++)
		{
			if (a[x] == *(s + i))
			{
				*(s + i) = b[x];
				break;
			}
		}
	}
	return (s);
}
