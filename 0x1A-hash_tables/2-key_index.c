#include "hash_tables.h"
/**
 * key_index -  function that gives you the index of a key.
 * @key: The key to find the index
 * @size: size of the array
 * Return: The index.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	if (!size)
		return (0);
	hash = hash_djb2(key);
	return (hash % size);
}
