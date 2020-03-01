#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins to make change.
 * @argc: Last index of argv.
 * @argv: Pointer.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int n, c = 0;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("0\n");
		return (0);
	}
	while (n >= 25)
	{
		n -= 25;
		c += 1;
	}
	while (n >= 10)
	{
		n -= 10;
		c += 1;
	}
	while (n >= 5)
	{
		n -= 5;
		c += 1;
	}
	while (n >= 2)
	{
		n -= 2;
		c += 1;
	}
	while (n >= 1)
	{
		n -= 1;
		c += 1;
	}
	printf("%d\n", c);
	return (0);
}
