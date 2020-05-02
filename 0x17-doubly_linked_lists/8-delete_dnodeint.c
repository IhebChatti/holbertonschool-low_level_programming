#include "lists.h"

/**
 *delete_dnodeint_at_index - delete node at given index DLL
 *@head: head node
 *@index: index
 *
 *Return: 1 on success, -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *cur;
	unsigned int i = 0;

	temp = *head;
	if ((index == 0) && temp)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	while (temp)
	{
		if (i == index - 1)
		{
			cur = temp->next;
			if (cur)
			{
				temp->next = cur->next;
				if (cur->next)
					cur->next->prev = temp;
				free(cur);
				return (1);
			}
		}
		temp = temp->next;
		i++;
	}
	return (-1);
}
