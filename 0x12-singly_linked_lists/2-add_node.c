#include "lists.h"
/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: header pointer of the list.
 * @str: new string.
 * Return: new.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int i = 0;

	new = (list_t *)malloc(sizeof(list_t));
	if (!new)
		return (0);
	new->str = strdup(str);
	while (str[i])
		i++;
	new->len = i;
	new->next = (*head);
	(*head) = new;
	return (new);
}
