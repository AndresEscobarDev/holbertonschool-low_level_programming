#include "holberton.h"

/**
 * swap_int - swaps two ints.
 * @a: First number.
 * @b: Second number.
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
