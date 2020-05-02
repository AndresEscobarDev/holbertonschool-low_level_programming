#include "lists.h"
/**
 * add_dnodeint- function that add a node at the beginning
 * of a doubly linked list
 * @head: Header of a doubly linked list
 * @n: value of the new node of the doubly linked list
 * Return: the address of the new node or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *current;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	if (!*head)
	{
		new->next = NULL;
		*head = new;
		return (new);
	}
	current = *head;
	while (current->prev)
		current = current->prev;
	current->prev = new;
	new->next = current;
	return (new);
}
