#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: Head of the listint.
 * @n: new element.
 * Return: A pointer to the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *h;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (0);
	new->n = n;
	new->next = 0;
	if (!*head)
		*head = new;
	else
	{
		h = *head;
		while (h->next)
			h = h->next;
		h->next = new;
	}
	return (new);
}
