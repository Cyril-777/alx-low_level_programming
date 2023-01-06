#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* main -  adds positive numbers.
* @argc: arguement count
* @argv: array of all the arguments
* Return: 0
**/
int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (int i = 1; i < argc; i++)
	{
		char *p = argv[i];

		while (*p)
		{
			if (!isdigit(*p))
			{
				printf("Error\n");
				return (1);
			}

			p++;
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
