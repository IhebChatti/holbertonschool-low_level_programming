#include "lists.h"

/**
 *add_dnodeint - add node at head of dll
 *@head: head node
 *@n: new data
 *
 *Return: new node adress on success, NULL on failure
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->next = *head;
	new->prev = NULL;
	new->n = n;
	if (*head)
		(*head)->prev = new;
	*head = new;
	return (new);
}
