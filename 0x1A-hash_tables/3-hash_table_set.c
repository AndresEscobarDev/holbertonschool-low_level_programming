#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table.
 * @key: new Key to add
 * @value: value to add
 * @ht: Hash table
 * Return: The address of the new element
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node = NULL;

	if (!ht || !key || !strcmp(key, "") || !value)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];
	while (node)
	{
		if (!strcmp(node->key, key))
		{
			free(node->value);
			node->value = strdup(value);
			return (1);
		}
		node = node->next;
	}
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	if (!ht->array[index])
	{
		(ht->array[index]) = node;
		node->next = NULL;
		return (1);
	}
	node->next = ht->array[index];
	(ht->array[index]) = node;
	return (1);
}
