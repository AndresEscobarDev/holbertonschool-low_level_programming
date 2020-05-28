#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: Hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i = 0;
	hash_node_t *tmp = NULL, *tmp2 = NULL;

	while (i < ht->size)
	{
		tmp2 = ht->array[i];
		while (tmp2)
		{
			tmp = tmp2;
			free(tmp->key);
			free(tmp->value);
			tmp2 = tmp->next;
			free(tmp);
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
