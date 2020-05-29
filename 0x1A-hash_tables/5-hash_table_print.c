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

	if (!ht || !ht->array)
		return;
	printf("{");
	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			flag = 1;
		}
		i++;
	}
	printf("}\n");
}
