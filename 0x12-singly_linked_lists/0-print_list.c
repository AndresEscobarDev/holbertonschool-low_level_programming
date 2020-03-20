#include "lists.h"
#include <stdio.h>
/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: header of the list.
 * Return: i.
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		i++;
	}
	return (i);
}
