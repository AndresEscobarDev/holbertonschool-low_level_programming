#include "holberton.h"
/**
 * more_numbers - lot of numbers.
 *
 * Return: Nothing.
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
				_putchar('0' + j / 10);
			_putchar('0' + j % 10);
		}
		_putchar('\n');
	}
}
