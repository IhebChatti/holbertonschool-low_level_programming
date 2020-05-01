#include "lists.h"

/**
 *get_dnodeint_at_index - get node at given index
 *@head: head node
 *@index: index
 *
 *Return: node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *node;

	node = head;
	if (node == NULL)
		return (NULL);
	while (node)
	{
		if (i == index)
			return (node);
		i++;
		node = node->next;
	}
	return (node);
}
