#include "holberton.h"
/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 * @n: pointer to the decimal number.
 * @index: index to change.
 * Return: -1 (fail) or 1 (work).
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(*n) * 8) - 1)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
