#include <stdlib.h>
/**
 * malloc_checked -  function that allocates memory using malloc.
 * @b: Space in memory.
 * Return: 98 or address.
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (!p)
		exit(98);
	return (p);
}
