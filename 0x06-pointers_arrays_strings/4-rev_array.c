#include "holberton.h"

/**
 * reverse_array - reverse an array.
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i, j;

	n--;
	for (i = 0; i <= n; i++, n--)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
