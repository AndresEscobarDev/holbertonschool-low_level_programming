#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a
 * listint_t linked list, and returns the head node’s data (n).
 * @head: Head of the listint.
 * Return: Nothing.
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *h;

	if (!head)
		return (0);
	h = *head;
	n = (*head)->n;
	*head = (*head)->next;
	free(h);
	return (n);
}
