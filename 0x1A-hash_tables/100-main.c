#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	shash_table_t *ht;

	ht = shash_table_create(1024);
	shash_table_print(ht);
	shash_table_set(ht, "Andres", "0");
	shash_table_print(ht);
	shash_table_set(ht, "Alex", "1");
	shash_table_print(ht);
	shash_table_set(ht, "Susana", "2");
	shash_table_print(ht);
	shash_table_set(ht, "Zoyla", "3");
	shash_table_print(ht);
	shash_table_set(ht, "Cuca", "4");
	shash_table_print(ht);
	shash_table_set(ht, "Rola", "5");
	shash_table_print(ht);
	shash_table_set(ht, "Pedro", "6");
	shash_table_print(ht);
	shash_table_set(ht, "Roberto", "7");
	shash_table_print(ht);
	shash_table_print_rev(ht);
	printf("%s", shash_table_get(ht, "Rola"));
		shash_table_delete(ht);
	return (EXIT_SUCCESS);
}
