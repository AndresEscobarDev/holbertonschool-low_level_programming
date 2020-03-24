#include "lists.h"
/**
 * sum_listint - function that returns the sum of all the data
 * (n) of a listint_t linked list.
 * @head: Head of the listint.
 * Return: Sum of data.
 */
int sum_listint(listint_t *head)
{
	int s = 0;

	if (!head)
	{
		return (0);
	}
	while (head)
	{
		s += head->n;
		head = head->next;
	}
	return (s);
}
