#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars.
 * @size: size of array.
 * @c: char to initialize
 * Return: a.
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	a = malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
