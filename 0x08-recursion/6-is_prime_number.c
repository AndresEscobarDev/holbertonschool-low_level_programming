#include "holberton.h"
/**
 * _prime - result of prime number.
 * @n: number.
 * @m: iterator.
 * Return: 0 or 1.
 */
int _prime(int n, int m)
{
	if (m < n)
	{
		if (n % m == 0)
			return (0);
		m = _prime(n, m + 1);
	}
	if (m != 0 && n % m == 0)
		return (1);
	return (0);
}
/**
 * is_prime_number - function that returns 1 if the input integer is a prime.
 * @n:Number.
 * Return: 0 or 1.
 */
int is_prime_number(int n)
{
	if (n < 1)
		return (0);
	return (_prime(n, 2));
}
