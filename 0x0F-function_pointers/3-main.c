#include "3-calc.h"

/**
 * main - Calculate a operation between two numbers.
 * @argc: Number of arguments.
 * @argv: The operation.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, j, r;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	i = atoi(argv[1]);
	j = atoi(argv[3]);
	r = get_op_func(argv[2])(i, j);
	printf("%d\n", r);
	return (0);
}
