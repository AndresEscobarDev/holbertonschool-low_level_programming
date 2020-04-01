#include "holberton.h"
/**
 * main - program that copies the content of a file to another file.
 * @ac: number of arguments.
 * @av: arguments.
 * Return: 0.
 */
int main(int ac, char **av)
{
	int fdr, fdw, i, j;
	char buf[1024];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fdr = open(av[1], O_RDONLY);
	if (fdr == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	fdw = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fdw == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	while ((i = read(fdr, buf, 1024)) > 0)
	{
		j = write(fdw, buf, i);
		if (j == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	}
	if (i == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	if (close(fdr) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdr), exit(100);
	if (close(fdw) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdw), exit(100);
	return (0);
}
