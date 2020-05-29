#include "hash_tables.h"
/**
 * shash_table_create - function that create a sorted hash table
 * @size: Size of the array of the sorted hash table
 * Return: Pointer to the new sorted hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht = NULL;

	if (!size)
		return (NULL);
	ht = calloc(1, sizeof(shash_table_t));
	if (!ht)
		return (NULL);
	ht->size = size;
	ht->array = calloc(size, sizeof(shash_node_t *));
	if (!ht->array)
		return (NULL);
	return (ht);
}
/**
 * shash_table_set - function that adds an element to the sorted hash table.
 * @key: new Key to add
 * @value: value to add
 * @ht: Sorted hash table
 * Return: The address of the new element
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *node = NULL;

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
	node = calloc(1, sizeof(shash_node_t));
	if (!node)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	if (!ht->array[index])
	{
		(ht->array[index]) = node;
		node->next = NULL;
	}
	node->next = ht->array[index];
	(ht->array[index]) = node;
	return (add_sort(node, ht));
}
/**
 * add_sort - function that inserts a node in a doubly
 * linked list
 * @node: node to insert
 * @ht: Sorted hash table
 * Return: 1 on success
 */
int add_sort(shash_node_t *node, shash_table_t *ht)
{
	shash_node_t *tmp = ht->shead;

	if (!ht->shead)
	{
		ht->shead = node;
		ht->stail = node;
	}
	else if (strcmp(node->key, tmp->key) < 0)
	{
		ht->shead = node;
		node->snext = tmp;
		tmp->sprev = node;
	}
	else
	{
		while (tmp->snext && strcmp(node->key, tmp->snext->key) >= 0)
			tmp = tmp->snext;
		node->sprev = tmp;
		if (!tmp->snext)
			ht->stail = node;
		else
			tmp->snext->sprev = node;
		node->snext = tmp->snext;
		tmp->snext = node;
	}
	return (1);
}
/**
 * shash_table_get - function that retrieves a value associated with a key.
 * @ht: Sorted hash table
 * @key: Key of element to search
 * Return: value of the element associated with the key or NULL
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;
	unsigned long int index;

	if (!ht || !key || !strcmp(key, ""))
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];
	while (node)
	{
		if (!strcmp(node->key, key))
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
/**
 * shash_table_print - function that prints a Sorted hash table.
 * @ht: Sorted hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp = ht->shead;
	int b = 0;

	printf("{");
	while (tmp)
	{
		if (b == 1)
			printf(", ");
		printf("'%s': '%s'", tmp->key, tmp->value);
		tmp = tmp->snext;
		b = 1;
	}
	printf("}\n");
}
/**
 * shash_table_print_rev - function that prints a Sorted hash
 * table in reverse.
 * @ht: Sorted hash table.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp = ht->stail;
	int b = 0;

	printf("{");
	while (tmp)
	{
		if (b == 1)
			printf(", ");
		printf("'%s': '%s'", tmp->key, tmp->value);
		tmp = tmp->sprev;
		b = 1;
	}
	printf("}\n");
}
/**
 * shash_table_delete - function that deletes a sorted hash table.
 * @ht: Sorted hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *tmp = NULL, *tmp2 = NULL;

	tmp2 = ht->shead;
	while (tmp2)
	{
		tmp = tmp2;
		free(tmp->key);
		free(tmp->value);
		tmp2 = tmp->snext;
		free(tmp);
	}
	free(ht->array);
	free(ht);
}
