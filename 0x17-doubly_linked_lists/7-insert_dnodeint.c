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
	if (idx == 0)
		return (add_dnodeint(h, n));
	if (h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	while (i < idx - 1)
	{
		if (i == idx)
		{
			(*h)->prev->next = new;
			new->prev = (*h)->prev;
			new->next = *h;
			(*h)->prev = new;
			return (new);
		}
		temp = temp->next;
		i++;
	}
	new->n = n;
	new->next = temp->next;
	new->prev = temp;
	temp->next = new;
	return (new);
}
