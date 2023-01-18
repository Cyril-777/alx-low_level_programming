#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - prints its own opcodes
 * @argc: n of arg
 * @argv: ar of arg
 *
 * Return: 0
 **/
int main(int argc, char *argv[])
{
	int i, bytes;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	arr = (char *) &main;

	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx ", arr[i]);
	}
	return (0);
}
