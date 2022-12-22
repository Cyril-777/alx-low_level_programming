#include "main.h"

/**
 * cap_string - func to capitalize all words of a string
 * @str: char type pointer
 * Return: pointer
 **/
char *cap_string(char *str)
{
	int i = 0;
	int a = 0;
	char c[] = {44, 59, 46, 33, 63, 34, 40, 41, 123, 125, 32, 10, 9};

	while (str[i] != '\0')
	{
		if (i == 0 && str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		while (c[a] != '\0')
		{
			if (c[a] == str[i] && (str[i + 1] >= 97 && str[i + 1] <= 122))
			{
				str[i + 1] = str[i + 1] - 32;
			}
			a++;
		}
		i++;
	}
	return (str);
}
