#include "lists.h"
/**
 * delete_dnodeint_at_index - Function that deletes a node in a given index.
 * @head: Header of a doubly linked list
 * @index: Index of the node to delete
 * Return: 1 if succeeded and -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current = *head;

    while (current && current->prev)
		current = current->prev;
    if (index == 0 && current)
    {
        if (current->next)
        {
            current->next->prev = NULL;
            *head = current->next;
        }
        else
        *head = NULL;
        free (current);
        return (1);
    }
    while (current)
    {
        if (index == 0)
        {
            current->prev->next = current->next;
            if (current->next)
                current->next->prev = current->prev;
            free(current);
            return (1);
        }
        current = current->next;
        index--;
    }
    return (-1);
}