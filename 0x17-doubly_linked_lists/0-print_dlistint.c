#include "lists.h"
/**
 * print_dlistint - Function that print a doubly linked list
 * @h: header of a doubly linked list
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
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
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
