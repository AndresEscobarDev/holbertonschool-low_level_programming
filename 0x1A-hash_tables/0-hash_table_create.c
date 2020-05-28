#include "hash_tables.h"

/**
 * hash_table_create - function that create a hash table
 * @size: Size of the array of the hash table
 * Return: Pointer to the new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = NULL;
	unsigned long int i = 0;

	if (!size)
		return (NULL);
	ht = malloc(sizeof(hash_table_t));
	if (!ht)
		return (NULL);
	ht->size = size;
	ht->array = malloc(size * sizeof(hash_node_t *));
	if (!ht->array)
		return (NULL);
	while (i < size)
		ht->array[i++] = NULL;
	return (ht);
}
