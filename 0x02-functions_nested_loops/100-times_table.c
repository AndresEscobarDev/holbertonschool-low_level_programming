#include "holberton.h"

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
				_putchar(' ');
				if (z < 10)
				{
					_putchar(' ');
				}
			}
		        if (z > 99)
			{
				_putchar(z / 100 + '0');
				_putchar((z / 10) % 10 + '0');
				_putchar(z % 10 +'0');
			}
			else
				if (z < 100 && z > 9)
				{
					_putchar(z / 10 + '0');
					_putchar(z % 10 + '0');
				}
				else
				{
					_putchar(z + '0');
				}
			if (y != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	}
}
