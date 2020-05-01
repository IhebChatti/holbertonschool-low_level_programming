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
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (h == NULL)
		return (NULL);
	if (idx == 0)
	{
		new->n = n;
		new->next = temp;
		*h = new;
		return (new);
	}
	while (i < idx - 1)
	{
		if (temp == NULL || temp->next == NULL)
			return (NULL);
		temp = temp->next;
		i++;
	}
	new->n = n;
	new->next = temp->next;
	temp->next = new;
	return (new);
}
