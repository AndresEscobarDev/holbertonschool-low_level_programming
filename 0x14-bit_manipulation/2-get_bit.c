#include "holberton.h"
/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: decimal number.
 * @index: binary index.
 * Return: -1 or value in the index position.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * 8) - 1)
		return (-1);
	return ((n >> index) & 1);
}
