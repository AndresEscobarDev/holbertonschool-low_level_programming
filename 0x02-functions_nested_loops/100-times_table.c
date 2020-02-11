#include "holberton.h"
#include <stdio.h>
/**
 * times_table - 9 times table.
 *
 * Return: Always 0.
 */
void print_times_table(int n)
{
	int x, y, z;
	if(n <= 15 && n >= 0)
	{
	for (x = 0; x <= n; x++)
	{
		for (y = 0; y <= n; y++)
		{
			z = x * y;
			if (z < 100 && y != 0)
			{
				printf(" ");
				if (z < 10)
				{
					printf(" ");
				}
			}
		        printf ("%i", z);
			if (y != n)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
	}
}
