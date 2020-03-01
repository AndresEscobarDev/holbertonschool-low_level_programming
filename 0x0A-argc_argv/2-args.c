#include <stdio.h>
/**
 * main - Prints the arguments passed into it.
 * @argc: Last index of argv.
 * @argv: Pointer.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
