#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: listint.
 * Return: lengh of list (i).
 */
size_t print_listint(const listint_t *h)
{
	unsigned long int i;

	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
