#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - function that creates an array of integers.
 * @min: Minimun number of the array.
 * @max: Maximun number of the array.
 * Return: n or NULL.
 */
int *array_range(int min, int max)
{
	int *n, i;

	if (min > max)
		return (0);
	n = malloc((max - min + 1) * sizeof(int));
	if (!n)
		return (0);
	for (i = 0; min <= max; i++, min++)
		n[i] = min;
	return (n);
}
