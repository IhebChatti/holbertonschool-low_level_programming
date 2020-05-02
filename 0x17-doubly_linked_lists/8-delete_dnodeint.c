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
	dlistint_t *temp, *nxt;
	unsigned int i = 0;

	temp = *head;
	if (*head == NULL)
		return (-1);
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
			nxt = temp->next;
			if (nxt)
			{
				temp->next = nxt->next;
				if (nxt->next)
					nxt->next->prev = temp;
				free(nxt);
				return (1);
			}
		}
		temp = temp->next;
		i++;
	}
	return (-1);
}
