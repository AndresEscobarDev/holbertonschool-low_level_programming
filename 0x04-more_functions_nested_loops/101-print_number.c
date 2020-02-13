#include "holberton.h"
#include <limits.h>
/**
 * print_number - Print numbers.
 * @n: number.
 * Return: Nothing.
 */

void print_number(int n)
{
	unsigned int i;

	if (n < 0)
	{
		_putchar('-');
		i = -n;
	}
	i = n;
	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar('0' + i % 10);
}
