#include "holberton.h"

/**
 * print_number - Print numbers.
 * @n: number.
 * Return: Nothing.
 */

void print_number(int n)
{
	int i, j, s, d, m;

	j = 0;
	if (n < 0)
	{
		n *= -1;
		j = -1;
	}
	m = 10;
	s = n;
	d = 1;
	for (i = 0; i <= 10; i++)
	{
		if (s / m > 0)
		{
			m *= 10;
			d++;
		}
	}
	m = m / 10;
	if (j == -1)
		_putchar('-');
	for (; d > 0; d--)
	{
		_putchar('0' + s / m);
		s = s % m;
		m = m / 10;
	}
	_putchar('\n');
}
