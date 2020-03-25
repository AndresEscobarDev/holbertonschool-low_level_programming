#include "lists.h"
/**
 * free_listint_safe - function that frees a listint_t list.
 * @h: Head of the listint.
 * Return: The size of the list that was free’d.
 */
size_t free_listint_safe(listint_t **h)
{
	int i = 0;
	listint_t *h2;

	while (*h)
	{
		i++;
		if (*h - (*h)->next > 0)
		{
			h2 = (*h)->next;
			free(*h);
			*h = h2;
		}
		else
		{
			free(*h);
			*h = 0;
			break;
		}
	}
	return (i);
}
