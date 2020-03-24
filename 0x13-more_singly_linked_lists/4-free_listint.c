#include "lists.h"
/**
 * free_listint - function that frees a listint_t list.
 * @head: Head of the listint.
 * Return: Nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *h = head;

	while (h)
	{
		h = head->next;
		free(head);
		head = h;
	}
}
