#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a new node at a
 * given position.
 * @head: Head of the listint.
 * @idx: Index where will be added the new node.
 * @n: Data of the new node.
 * Return: The new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *h = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (0);
	if (idx == 0)
	{
		new->n = n;
		new->next = h;
		*head = new;
		return (new);
	}
	while (idx > 1)
	{
		if (!h)
			return (0);
		h = h->next;
		idx--;
	}
	new->n = n;
	new->next = h->next;
	h->next = new;
	return (new);
}
