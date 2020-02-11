#include "holberton.h"
#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
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
