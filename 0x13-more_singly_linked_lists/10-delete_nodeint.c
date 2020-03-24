#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the node at index index of a listint_t linked list.
 * @head: Head of the listint.
 * @index: Index of the required node.
 * Return: -1 or 1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *h = *head, *h2;

	if (!*head)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(h);
		return (1);
	}
	while (index > 1)
	{
		if (!h)
			return (-1);
		h = h->next;
		index--;
	}
	if (h || h->next)
	{
		h2 = h->next;
		h->next = h2->next;
		free(h2);
	}
	else
		return (-1);
	return (1);
}
