#include "holberton.h"

/**
 * print_number - Print numbers.
 * @n: number.
 * Return: Nothing.
 */

void print_number(int n)
{
	int i, j, d, m;

	j = 0;
	if (n < 0)
	{
		n *= -1;
		j = -1;
	}
	m = 10;
	d = 1;
	for (i = 0; i <= 30; i++)
	{
		if (n / m > 0)
		{
			m *= 10;
			d++;
		}
	}
	m = m / 10;
	if (j == -1)
		_putchar('-');
	while (d > 0)
	{
		_putchar('0' + n / m);
		n = n % m;
		m = m / 10;
		d--;
	}
}
