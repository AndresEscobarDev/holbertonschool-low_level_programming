#include "lists.h"
/**
 * free_dlistint - function that frees a doubly linked list
 * @head: Header of a doubly linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *fr;

	if (!head)
		return;
	if (head->prev)
	{
		while (head->prev)
			head = head->prev;
	}
	fr = head->next;
	while (head)
	{
		free(head);
		if (!fr)
			return;
		head = fr;
		fr = fr->next;
	}
}
