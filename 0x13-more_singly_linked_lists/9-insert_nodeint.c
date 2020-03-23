#include "lists.h"

/**
 *insert_nodeint_at_index - insert a node at a given position
 *@head: head of the linked list
 *@idx: the index of the list where the new node should be added
 *@n: the data of the inserted node
 *
 *Return: new node if success, NULL on failure
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new;
	unsigned int i = 0;

	temp = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if (head == NULL)
		return (NULL);

	if (idx == 0)
	{
		new->n = n;
		new->next = temp;
		*head = new;
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
