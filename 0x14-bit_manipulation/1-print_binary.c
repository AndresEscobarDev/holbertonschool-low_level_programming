#include "holberton.h"
/**
 * print_binary - function that prints
 * the binary representation of a number.
 * @n: Decimal number.
 */
void print_binary(unsigned long int n)
{
	static int n2;

	if (n != 0)
		n2 = 1;
	if (n2 == 0)
		_putchar('0');
	if (n > 0)
		print_binary(n >> 1);
	else
		return;
	_putchar('0' + (n & 1));
}
