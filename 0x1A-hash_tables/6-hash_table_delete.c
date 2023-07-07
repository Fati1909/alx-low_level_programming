#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: pointer to hash table
 * Return: Nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *bk, *fr;
	unsigned long int j = 0;

	if (!ht)
		return;

	for (j = 0; j < ht->size; j++)
	{
		bk = ht->array[j];
		while (bk)
		{
			fr = bk;
			bk = bk->next;
			if (fr->key)
				free(fr->key);
			if (fr->value)
				free(fr->value);
			free(fr);
		}
	}
	free(ht->array);
	free (ht);
}
