#include "lists.h"
/**
 * reverse_listint - function that reverses a listint_t linked list.
 * @head: Head of the listint.
 * Return: pointer to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *h1, *h2 = 0;

	while (*head)
	{
		h1 = (*head)->next;
		(*head)->next = h2;
		h2 = *head;
		*head = h1;
	}
	*head = h2;
	return (*head);
}
