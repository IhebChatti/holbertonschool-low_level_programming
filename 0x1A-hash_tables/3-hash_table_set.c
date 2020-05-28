#include "hash_tables.h"

/**
 * 
 * 
 * 
 * 
 * 
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *new;

	if (!ht || !key || !*key || !value)
		return (0);
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	while (ht->array[idx])
	{
		if (strcmp(ht->array[idx]->key, key) == 0)
		{
			ht->array[idx]->value = strdup(value);
			return (1);
		}
		idx++;
	}
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[idx];
	ht->array[idx] = new;
	return (1);
}
