#include "holberton.h"

/**
 * times_table - 9 times table.
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int x, y, z;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			z = x * y;
			if (z < 10)
			{
				_putchar(' ');
				_putchar(z + '0');
			}
			else
			{
				_putchar(z / 10 + '0');
				_putchar(z % 10 + '0');
			}
			if(y != 9)
			{
			_putchar(',');
			_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
