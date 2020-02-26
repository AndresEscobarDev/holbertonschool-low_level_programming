#include "holberton.h"

/**
 * factorial - function that returns the factorial of a given number
 * @n: number.
 * Return: n.
 */
int factorial(int n)
{
	int c = 0;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	if(n > 0)
		c = n * factorial(n - 1);
	return c;
}
