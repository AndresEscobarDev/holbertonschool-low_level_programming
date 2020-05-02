#include "lists.h"
/**
 * add_dnodeint_end - function that add a node at the end
 * of a doubly linked list
 * @head: Header of a double linked list
 * @n: value of the new node of the doubly linked list
 * Return: the address of the new node or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *current;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!*head)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	current = *head;
	while (current->next)
		current = current->next;
	current->next = new;
	new->prev = current;
	return (new);
}
