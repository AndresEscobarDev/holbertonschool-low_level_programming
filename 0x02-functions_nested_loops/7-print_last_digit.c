#include "holberton.h"

/**
 * print_last_digit - print the last digit.
 * @n: number.
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	int o;

	o = n % 10;
	if (o < 0)
	{
		o = o * (-1);
	}
	_putchar('0' + o);
	return (o);
}
