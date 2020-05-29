#include "hash_tables.h"

/**
 * hash_table_get - get the values by key
 * @ht: hashtable
 * @key: the key we searching
 *
 * Return: Value on success, NULL on failure
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *pair;

	i = key_index((const unsigned char *)key, ht->size);
	pair = ht->array[i];
	while (pair && pair->key && strcmp(key, pair->key) > 0)
		pair = pair->next;
	if (!pair || !pair->key || strcmp(key, pair->key) < 0)
		return (NULL);
	return (pair->value);
}
