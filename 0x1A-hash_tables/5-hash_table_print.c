#include "hash_tables.h"

/**
 * hash_table_print - function that print a hash table
 * @ht:pointer to hash table
 * Return: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int j = 0;
	hash_node_t *bk;
	int c = 0;

	if (!ht)
		return;

	printf("{");
	for (j = 0; j < ht->size; j++)
	{
		bk = ht->array[j];
		while (bk)
		{
			if (c)
				printf(", ");
			printf("'%s': '%s'", bk->key, bk->value);
			c = 1;
			bk = bk->next;
		}
	}
	printf("}\n");
}
