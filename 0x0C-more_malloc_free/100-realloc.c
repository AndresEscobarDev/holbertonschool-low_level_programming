#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory block using malloc and free.
 * @ptr: Old pointer.
 * @old_size: Old Size.
 * @new_size: New Size.
 * Return: n or NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *n, *s = ptr;
	unsigned int i = 0;

	if (new_size == old_size)
		return (ptr);
	if (!ptr)
		return (malloc(new_size));
	if (ptr && new_size == 0)
	{
		free(ptr);
		return (0);
	}
	n = malloc(new_size);
	if (n == 0)
		return (0);
	while (i < new_size)
	{
		n[i] = s[i];
		i++;
	}
	free(ptr);
	return (n);
}
