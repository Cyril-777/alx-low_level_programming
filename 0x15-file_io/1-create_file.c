#include "main.h"
#include <stddef.h>
/**
 * create_file: func to create a file
 * description: short describe
 * @filename: self ex
 * @text_content: self ex
 * Return: 0
 **/
int create_file(const char *filename, char *text_content)
{
	if (filename == NULL)
	{
		return (-1);
	}
	FILE *file = fopen(filename, "w");

	if (file == NULL)
	{
		return (-1);
	}

	chmod(filename, S_IRUSR | S_IWUSR);

	if (text_content != NULL)
	{
		fprintf(file, "%s", text_content);
	}
	fclose(file);
	return (1);
}
