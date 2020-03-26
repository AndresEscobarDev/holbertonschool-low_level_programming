#include "holberton.h"
#include <stdio.h>
/**
 * flip_bits - function that returns the number of bits you would
 * need to flip to get from one number to another.
 * @n: First number.
 * @m: Second number.
 * Return: number of bits you would need to flip to
 * get from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int o = n ^ m;
	int i = 0;

	while (o > 0)
	{
		if ((o & 1) == 1)
			i++;
		o = o >> 1;
	}
	return (i);
}
