#include "lists.h"

/**
 *insert_dnodeint_at_index - insert a node at given index DLL
 *@h: head node
 *@idx: index
 *@n: new data
 *
 *Return: new node adress
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp;
	unsigned int i = 0;

	temp = *h;
	if (idx == 0 || temp->next == NULL)
		return (add_dnodeint(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	while (i < idx - 1)
	{
		if (!temp)
			return (NULL);
		temp = temp->next;
		i++;
	}
	new->n = n;
	temp->prev->next = new;
	new->prev = temp;
	new->next = temp->next;
	temp->next = new;
	return (new);
}
