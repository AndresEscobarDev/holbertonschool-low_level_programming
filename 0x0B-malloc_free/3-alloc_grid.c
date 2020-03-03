#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers.
 * @width: width of the array.
 * @height: heaight of the array.
 * Return: a or NULL.
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int i, j;

	if (width < 1 || height < 1)
		return ('\0');
	a = malloc(height * sizeof(int *));
	if (a == NULL)
		return ('\0');
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(width * sizeof(int));
		if (a[i] == NULL)
		{
			for (j = 0; j <= i; j++)
				free(a[i]);
			free(a);
			return ('\0');
		}
		for (j = 0; j < width; j++)
		{
			a[i][j] = 0;
		}
	}
	return (a);
}
