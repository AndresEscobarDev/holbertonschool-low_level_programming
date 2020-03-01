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
	if (argc == 3)
	{
		printf("%d \n", (atoi(argv[1])) * atoi(argv[2]));
	}
	else
		printf("Error\n");
	return (0);
}
