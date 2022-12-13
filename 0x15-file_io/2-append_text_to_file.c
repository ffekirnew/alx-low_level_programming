#include "main.h"

/**
 * append_text_to_file - appends text to a file
 * @filename: the file name to append the new text too
 * @text_content: the text to be appended
 *
 * Return: 1 for seccess, -1 for failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);

	while (text_content[i])
		i++;
	if (i)
		write(fd, text_content, i);
	close(fd);
	return (1);
}
