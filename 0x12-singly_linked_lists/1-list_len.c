#include "lists.h"
/**
 * list_len - function that returns the number of
 * elements in a linked list_t list.
 * @h: header of the list.
 * Return: i.
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
