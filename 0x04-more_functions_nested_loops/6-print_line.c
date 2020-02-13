#include "holberton.h"
/**
 * print_line - Print lines.
 * @n: number.
 * Return: Nothing.
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n = n - 1;
	}
	_putchar('\n');
}
