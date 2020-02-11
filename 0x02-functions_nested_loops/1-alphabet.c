#include "holberton.h"

/**
 * print_alphabet - Print alphabet.
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
