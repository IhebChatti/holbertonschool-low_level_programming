#include "hash_tables.h"

/**
 * hash_table_print - display the hashtable
 * @ht: hashtable to display
 *
 * Return: Void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int flag = 0;
	hash_node_t *temp;

	if (!ht)
		return;
	printf("{");
	while (i < ht->size)
	{
		temp = ht->array[i];
		while (temp)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			temp = temp->next;
			flag = 1;
		}
		i++;
	}
	printf("}\n");
}
