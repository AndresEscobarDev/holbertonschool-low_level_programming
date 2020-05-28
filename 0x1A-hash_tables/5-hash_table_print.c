#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table.
 * @ht: Hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i = 0;
	hash_node_t *tmp = NULL;
	int b = 0;

	printf("{");
	while (i < ht->size)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			if (b == 1)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			tmp = tmp->next;
			b = 1;
		}
		i++;
	}
	printf("}\n");
}
