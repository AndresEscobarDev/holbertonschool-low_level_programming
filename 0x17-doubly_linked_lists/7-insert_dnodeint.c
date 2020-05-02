#include "lists.h"
/**
 * insert_dnodeint_at_index - function that add a node in a gave index
 * @h: her of the doubly linked list
 * @idx: Index where going to add the new node
 * @n: Value of the new node
 * Return: The address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		if (*h)
			h[0]->prev = new, new->next = *h;
		else
			new->next = NULL;
		new->prev = NULL;
		*h = new;
		return (new);
	}
	if (!*h)
		return (NULL);
	current = *h;
	while (current->prev)
		current = current->prev;
	while (current)
	{
		if (idx == 0)
		{
			current->prev->next = new, new->prev = current->prev;
			current->prev = new, new->next = current;
			return (new);
		}
		new->prev = current;
		current = current->next;
		idx--;
	}
	if (!idx)
	{
		new->prev->next = new;
		new->next = NULL;
		return (new);
	}
	return (NULL);
}
