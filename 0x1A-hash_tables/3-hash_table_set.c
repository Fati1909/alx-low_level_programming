#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: pointer to hash table
 * @key: key to add
 * @value: value to add
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0;
	char *newvalue, *newkey;
	hash_node_t  *bucket, *new_node;

	if (!ht || !key || !*key || !value)
		return (0);

	newvalue = strdup(value);
	if (!newvalue)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	bucket = ht->array[idx];

	while (bucket)
	{
		if (!strcmp(key, bucket->key))
		{
			free(bucket->value);
			bucket->value = newvalue;
			return (1);
		}
		bucket = bucket->next;
	}
	new_node = calloc(1, sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(newvalue);
		return (0);
	}
	newkey = strdup(key);
	if (!newkey)
		return (0);
	new_node->key = newkey;
	new_node->value = newvalue;
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;
	return (1);
}
