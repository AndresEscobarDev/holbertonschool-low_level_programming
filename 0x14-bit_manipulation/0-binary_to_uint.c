#include "holberton.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: Binary number.
 * Return: Unsigned int (d).
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int d = 0;
	int i;

	for (i = 0; b && b[i]; i++)
	{
		if (b[i] == '0' || b[i] == '1')
			d = d * 2 + (b[i] - '0');
		else
			return (0);
	}
	return (d);
}
