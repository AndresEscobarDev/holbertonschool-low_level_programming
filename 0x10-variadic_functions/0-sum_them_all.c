#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: constant int.
 * Return: sum or 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list vl;

	if (n == 0)
		return (0);
	va_start(vl, n);
	for (i = 0; i < n; i++)
		sum += va_arg(vl, int);
	va_end(vl);
	return (sum);
}
