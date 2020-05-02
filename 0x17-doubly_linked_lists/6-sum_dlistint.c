#include "lists.h"
/**
 * print_dlistint - Function that print a doubly linked list
 * @h: header of a doubly linked list
 * Return: The number of nodes
 */
int sum_dlistint(dlistint_t *head)
{
	int s = 0;

	if (!head)
		return (0);
	if (head->prev)
	{
		while (head->prev)
			head = head->prev;
	}
	while(head)
	{
		s += head->n;
		head = head->next;
	}
	return (s);
}
