#include "lists.h"
/**
 * dlistint_len - function that returns the number of
 * elements of a doubly linked list
 * @h: Header of a doubly linked list
 * Return: Leng of a doubly linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i;

	if (!h)
		return (0);
	if (h->prev)
	{
		while (h->prev)
			h = h->prev;
	}
	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
