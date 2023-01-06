#include <stdio.h>
/**
* main -  writes its main
* @argc: arguement count
* @argv: array of all the arguments
* Return: 0
**/
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
