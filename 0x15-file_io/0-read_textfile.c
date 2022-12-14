#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * @filename: the name of the text file
 * @letters: the number of letters in the text file
 *
 * Return: the actual number of letters that can be printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = open(filename, O_RDONLY);
	char *buf = malloc(sizeof(char) * letters + 1);
	size_t counter = 0;

	if (buf == NULL)
		return (0);

	if (fd == -1)
		return (0);

	read(fd, buf, letters + 1);
	while (buf[counter])
	{
		_putchar(buf[counter]);
		counter += 1;
	}

	close(fd);
	return (counter + 1);
}
