#include "holberton.h"
/**
 * pow_number - function that returns the square root of a number.
 * @n: Number.
 * @m: Number.
 * Return: m.
 */
int pow_number(int n, int m)
{
	if (m * m != n && m > 0)
	{
		m = pow_number(n, m - 1);
	}
	else if (m * m == n)
	{
		return (m);
	}
	return (m);
}
/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: Number.
 * Return: n.
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (-1);
	if (n > 0)
	{
		if (pow_number(n, n) * pow_number(n, n) == n)
			return (pow_number(n, n));
	}
	return (-1);
}
