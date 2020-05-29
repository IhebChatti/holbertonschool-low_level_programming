#include "hash_tables.h"

/**
 * 
 * 
 * 
 * 
 * 
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *temp;

	while (i < ht->size)
	{
		temp = ht->array[i];
		while (temp)
		{
			free(temp->key);
			free(temp->value);
			temp = temp->next;
		}
		i++;
	}
	free(ht);
}