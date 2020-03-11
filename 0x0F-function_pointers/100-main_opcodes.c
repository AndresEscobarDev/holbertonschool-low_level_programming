#include <stdio.h>
#include <stdlib.h>
/**
 * main -program that prints the opcodes of its own main function.
 * @argc: Arguments number.
 * @argv: Arguments.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, j;
	char *p_main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	j = atoi(argv[1]);
	if (j < 0)
	{
		printf("Error\n");
		exit(2);
	}
	p_main = (char *)main;
	for (i = 0; i < j; i++)
	{
		printf("%02hhx ", p_main[i]);
	}
	return (0);
}
