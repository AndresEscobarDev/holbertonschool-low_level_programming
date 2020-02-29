#include <stdio.h>
#include <stdlib.h>
/**
 * main - Multiplies two numbers.
 * Return: 0.
 * @argc: Arguments number of commands.
 * @argv: Pointer with commands.
 */
int main(int argc, char *argv[])
{
	int m;

	if (argc == 3)
	{
		m = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", m);
	}
	return (0);
}
