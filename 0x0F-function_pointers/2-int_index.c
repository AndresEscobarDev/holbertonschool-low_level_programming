/**
 * int_index - function that searches for an integer.
 * @array: Array of ints.
 * @size: Size of array.
 * @cmp: Functions.
 * Return: 0 or Index.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp)
		return (0);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (0);
}
