#include "lists.h"
#include <stdio.h>
/**
 * print_listint_safe - function that prints a listint_t linked list.
 * @head: Head of the listint.
 * Return: Size of the list that was printed.
 */
size_t print_listint_safe(const listint_t *head)
{
	int i = 0;

	while (head)
	{
		i++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (head - head->next > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (i);
}
