B#include "holberton.h"
/**
 * pow_number - function that returns the square root of a number.
 * @n: Number.
 * @m: Number.
 * Return: m.
 */
int pow_number(int n, int m)
{
	if (m * m == n)
		return (m);
	if (m <= n)
		m = pow_number(n, m + 1);
	if (m * m == n)
		return (m);
	return (-1);
}
/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: Number.
 * Return: n.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (pow_number(n, 0));
}
