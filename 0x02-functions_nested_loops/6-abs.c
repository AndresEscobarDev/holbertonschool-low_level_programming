#include "holberton.h"

/**
 * _abs - absolute number.
 * @n: number.
 * Return: Always 0.
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * (-1);
	}
	return (n);
}
