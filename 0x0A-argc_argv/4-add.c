#include <stdio.h>
#include <stdlib.h>

/**
 * main - Add the arguments passed into it.
 * @argc: Last index of argv.
 * @argv: Pointer.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, s = 0;

	if (argc == 0)
	{
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		else
			s += atoi(argv[i]);
	}
	printf("%d\n", s);
	return (0);
}
