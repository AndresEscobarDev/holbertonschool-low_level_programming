#include <stdio.h>
/**
 * main - The following line.
 * Return: 0.
 * @argc: Arguments number of commands.
 * @argv: Pointer with commands.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
