#include "holberton.h"

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n = n-1;
	}
	_putchar('\n');
}
