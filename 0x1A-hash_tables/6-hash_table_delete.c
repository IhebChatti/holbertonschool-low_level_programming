#include "hash_tables.h"

/**
 * hash_table_delete - functon to delete hashtable
 * @ht: hashtable to be deleted
 *
 * Return: Void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *temp;

	if (!ht)
		return;
	while (i < ht->size)
	{
			temp = ht->array[i];
			while (temp)
			{
				free(temp->key);
				free(temp->value);
				temp = temp->next;
			}
			free(temp);
		i++;
	}
	free(ht->array);
	free(ht);
}
