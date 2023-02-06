#include "main.h"
#include <stddef.h>
/**
 * read_textfile - reads a text file and prints it to the
 * POSIX standard output
 * @filename: self exp
 * @letters: num of letters
 * Return: number of letters it could read and print
 **/
ssizet readtextfile(const char *filename, sizet letters)
{
	int fd;
	ssizet nread;
	char *buff;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	nread = read(fd, buff, letters);
	if (nread == -1)
	{
		free(buff);
		return (0);
	}

	if (write(STDOUT_FILENO, buff, nread) != nread)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(fd);
	return (nread);
}
