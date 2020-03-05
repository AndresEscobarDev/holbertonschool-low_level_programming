#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: Number of members.
 * @size: Size of a member.
 * Return: NULL or pointer.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (!nmemb || !size)
		return (0);
	return (malloc(nmemb * size));
}
