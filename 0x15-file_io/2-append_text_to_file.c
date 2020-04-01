#include "holberton.h"
/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: File name.
 * @text_content: string to append at the end of the file.
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i = 0, j;

	if (!filename)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
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
