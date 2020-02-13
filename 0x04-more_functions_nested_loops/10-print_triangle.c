#include "holberton.h"
/**
 * print_triangle - Triangles.
 * @size: size.
 * Return: Nothing.
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
	for (i = size; i > 0; i--)
	{
		for (j = 0; j < size; j++)
		{
			if (j < i - 1)
				_putchar(' ');
			else if (j >= 0)
				_putchar('#');
		}
		_putchar('\n');
	}
	}
	if (size <= 0)
		_putchar('\n');
}
