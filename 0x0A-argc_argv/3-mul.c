#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the arguments passed into it.
 * @argc: Last index of argv.
 * @argv: Pointer.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int m1, m2, r;

	if (argc >= 3)
	{
		m1 = atoi(argv[1]);
		m2 = atoi(argv[2]);
		r = m1 * m2;
		printf("%d \n", r);
	}
	else
		printf("Error\n");
	return (0);
}
