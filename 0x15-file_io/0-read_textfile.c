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
	int file, nr, wrote;
	char *buff;

	buff = malloc(sizeof(*buff) * (letters + 1));
	if (filename == NULL || buff == NULL)
	{
		free(buff);
		return (0);
	}
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	nr = read(file, buff, letters);
	if (nr == -1)
		return (0);
	buff[nr] = '\0';
	wrote = write(STDOUT_FILENO, buff, nr);
	if (wrote != nr)
		return (0);
	free(buff);
	close(file);
	return (nr);
}
