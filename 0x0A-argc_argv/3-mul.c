#include <stdio.h>
#include <stdlib.h>
/**
* main -  multiplies two numbers.
* @argc: arguement count
* @argv: array of all the arguments
* Return: 0
**/
int main(int argc, char *argv[])
{
	if (argc <= 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
		printf("%d\n", (atoi(argv[argc - 1]) * atoi(argv[argc - 2])));
	return (0);
}
