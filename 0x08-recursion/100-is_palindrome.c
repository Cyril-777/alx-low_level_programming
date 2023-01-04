#include "main.h"

/**
 * _strlen_recursion - returns 1 if a string is a palindrome and 0 if not.
 * @s: string
 * Return: 1 or 0
 */

int is_palindrome(char *s) 
{
	if (*s == '\0') 
		return (1); 
	if (*s != *(s + strlen(s) - 1)) 
		return (0); 
	if (strlen(s) == 2)
		return (1); 
	else
		return (is_palindrome(s + 1)); 
}
