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
	hash_node_t *temp;
	int flag = 0;

	if (!ht || !ht->array)
		return;
	printf("{");
	while (i < ht->size)
	{
		temp = ht->array[i];
		if (temp)
		{
			if (flag == 1)
				printf(", ");
			while (temp->next)
			{
				printf("'%s': '%s'", temp->key, temp->value);
				temp = temp->next;
			}
			printf("'%s': '%s'", temp->key, temp->value);
			flag = 1;
		}
		i++;
	}
	printf("}\n");
}
