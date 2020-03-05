#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: Number of members.
 * @size: Size of a member.
 * Return: NULL or pointer.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int i = 0;

	if (!nmemb || !size)
		return (0);
	s = (malloc(nmemb * size));
	if (s == 0)
		return (0);
	while (i < nmemb)
	{
		s[i] = 0;
		i++;
	}
	return (s);
}
