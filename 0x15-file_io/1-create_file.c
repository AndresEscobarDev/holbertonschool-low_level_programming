#include "holberton.h"
/**
 * create_file - function that creates a file.
 * @filename: File name.
 * @text_content: string to write to the file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i = 0, j;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	while (text_content && text_content[i])
		i++;
	if (i > 0)
	{
		j = write(fd, text_content, i);
		if (j == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
