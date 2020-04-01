#include "holberton.h"
/**
 * read_textfile - function that reads a text file an
 * prints it to the POSIX standard output.
 * @filename: File name.
 * @letters: Number of letters it could read and print.
 * Return: The numbers of letters printed or 0 if it failed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, i, j;
	char *buf;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	i = read(fd, buf, letters);
	if (i == -1)
	{
		free(buf);
		return (0);
	}
	close(fd);
	j = write(STDOUT_FILENO, buf, i);
	free(buf);
	if (j == -1)
		return (0);
	return (j);
}
