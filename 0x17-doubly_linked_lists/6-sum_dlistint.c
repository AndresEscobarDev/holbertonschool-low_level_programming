#include "lists.h"
/**
 * sum_dlistint - Function that print a doubly linked list
 * @head: header of a doubly linked list
 * Return: The add of the node values
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
	while (head)
	{
		s += head->n;
		head = head->next;
	}
	return (s);
}
