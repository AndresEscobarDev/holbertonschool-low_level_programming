#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square
 * matrix of integers.
 * @a: Array.
 * @size: Size of array.
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
	int i, j, s1 = 0, s2 = 0;
	int z = size * size;

	for (i = 0, j = size - 1; i < z; i += size + 1, j += size - 1)
	{
		s1 += a[i];
		s2 += a[j];
	}
	printf("%d, %d\n", s1, s2);
}
