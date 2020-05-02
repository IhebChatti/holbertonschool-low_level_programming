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

	new->n = n;
	while (temp)
	{
		if (!temp && (idx - 1) == i)
			return (add_dnodeint(h, n));
		if (i == idx)
		{
			(temp->prev)->next = new;
			new->prev = temp->prev;
			new->next = temp;
			temp->prev = new;
			return (new);
		}
		temp = temp->next;
		i++;
	}
	return (NULL);
}
