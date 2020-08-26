#include <stdlib.h>
#include <stdio.h>
/**
 * help_search - Function that searches for a value in a sorted array of integers using the Binary search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @l: left index of the array.
 * @r: right index of the array.
 * @value: Valyde to search for.
 * Return: Index where value is located.
 */
int help_search(int *array, size_t l, size_t r, int value)
{
	size_t i, mid;

	printf("Searching in array: ");
	for (i = l; i <= r; i++)
	{
		printf("%i", array[i]);
		if (i < r)
			printf(", ");
	}
	printf("\n");
	if (l == r && array[l] != value)
		return (-1);
	mid = ((r - l) / 2) + l;
	if (array[mid] == value)
		return (mid);
	if (array[mid] > value)
		return (help_search(array, l, mid - 1, value));
	if (array[mid] < value)
		return (help_search(array, mid + 1, r, value));
	return (-1);
}

/**
 * linear_search - Function that searches for a value in a sorted array of integers using the Binary search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in array.
 * @value: Value to search for.
 * Return: Index where value is located.
 */
int binary_search(int *array, size_t size, int value)
{
	if (size == 0 || !array)
		return (-1);
	return (help_search(array, 0, size - 1, value));
}
