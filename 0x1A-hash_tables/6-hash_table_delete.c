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
	hash_node_t *temp, *node;
	hash_table_t *_ht = ht;

	if (!_ht)
		return;
	while (i < _ht->size)
	{
		node = _ht->array[i];
		while (node)
		{
			temp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = temp;
		}
		i++;
	}
	free(_ht->array);
	free(_ht);
}
