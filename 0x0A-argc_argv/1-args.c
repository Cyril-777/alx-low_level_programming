#include <stdio.h>

/**
* main - prints the number of arguments passed into it
* @argc: arguement count
* @argv: array of all the arguments
* Return: 0
**/

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
