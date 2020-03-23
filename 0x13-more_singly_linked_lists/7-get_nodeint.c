#include "lists.h"

/**
 *get_nodeint_at_index - get the nth node of linked list
 *@head: head of linked list
 *@index: index of the node
 *
 *Return: nth node on success, NULL on failure
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node;

	node = head;
	if (node == NULL)
		return (NULL);
	while (node != NULL)
	{
		if (i == index)
			return (node);
		i++;
		node = node->next;
	}
	return (node);
}
