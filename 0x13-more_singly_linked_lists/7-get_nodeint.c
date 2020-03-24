#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node
 * of a listint_t linked list.
 * @head: Head of the listint.
 * @index: Index of the required node.
 * Return: Requested node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	while (index > 0)
	{
		if (!head)
			return (0);
		head = head->next;
		index--;
	}
	return (head);
}
