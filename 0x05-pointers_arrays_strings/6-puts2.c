#include "holberton.h"

/**
 * puts2 - only pairs.
 * @str: string.
 * Return: Always 0.
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
