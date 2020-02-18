#include "holberton.h"

/**
 * print_rev - print a string in reverse.
 * @s:String.
 * Return: Nothing.
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	i--;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
}
