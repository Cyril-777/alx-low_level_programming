#include "main.h"
#include <ctype.h>

/**
  * string_toupper - changes lowercase letters to uppercase
  * @str: String to return
  * Return: String
  */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		str[i] = toupper(str[i]);
		i++;
	}
	return (str);
}
