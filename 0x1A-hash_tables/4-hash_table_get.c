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

	if (!ht || !key || !*key)
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);
	pair = ht->array[i];
	while (pair && pair->key)
	{
		if (strcmp(pair->key, key) == 0)
			return (pair->value);
		pair = pair->next;
	}
	return (NULL);
}
