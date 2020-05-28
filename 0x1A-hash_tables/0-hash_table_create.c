#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: size of hashtable
 *
 * Return: pointer to created hashtable on success,
 * NULL on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i = 0;

	ht = malloc(sizeof(hash_table_t));
	if (!ht)
		return (NULL);
	ht->size = size;
	ht->array = malloc(size * sizeof(hash_node_t));
	if (!ht->array)
	{
		free(ht);
		return (NULL);
	}
	while (i < size)
	{
		ht->array[i] = NULL;
		i++;
	}
	return (ht);
}
