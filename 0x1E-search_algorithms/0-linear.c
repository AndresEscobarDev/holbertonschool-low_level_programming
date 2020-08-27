#include <stdlib.h>
#include <stdio.h>
/**
 * linear_search - Function that searches for a value in an array of
 * integers using the Linear search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in array.
 * @value: Value to search for.
 * Return: Index where value is located.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;
	int idx = -1;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%i]\n", i, array[i]);
		if (array[i] == value)
		{
			idx = i;
			break;
		}
	}
	return (idx);
}
