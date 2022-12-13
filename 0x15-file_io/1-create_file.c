#include "main.h"

/**
 * create_file - creates a file with the given text_content
 * @filename: the file name
 * @text_content: the text content
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	size_t i = 0;
	int fd;

	while (text_content[i])
	{
		i++;
	}

	fd = open(filename, O_CREAT | O_WRONLY, 0600);
	if (filename == NULL || fd == -1)
		return (-1);

	if (text_content != NULL)
		write(fd, text_content, i);
	close(fd);
	return (1);
}
