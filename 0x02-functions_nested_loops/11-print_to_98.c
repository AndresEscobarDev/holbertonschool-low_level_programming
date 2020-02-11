#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - natural numbers since 98.
 * @n: number.
 * Return: Always 0.
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%i, ", n);
			n++;
		}
	}
	else
	{
		while (n > 98)
		{
			printf("%i, ", n);
			n--;
		}
	}
	printf("98\n");
}
