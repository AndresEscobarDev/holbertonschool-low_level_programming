 #include "lists.h"
/**
 * get_dnodeint_at_index - Function that returns the
 * address of a given index
 * @head: Header of a doubly linked list
 * @index: Number of the index to return
 * Return: The address of a given index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (!head)
		return (NULL);
	if (head->prev)
	{
		while (head->prev)
			head = head->prev;
	}
	while (head)
	{
		if (index == 0)
			return head;
		head = head->next;
		index--;
	}
	return (NULL);
}
