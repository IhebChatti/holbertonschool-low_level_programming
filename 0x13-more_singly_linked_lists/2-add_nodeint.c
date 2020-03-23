#include "lists.h"

/**
 *add_nodeint - function to add a new node at the head
 *@head: head of linked list
 *@n: number to be added
 *
 *Return: new list on success, NULL on failure
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->next = *head;
	new->n = n;
	*head = new;
	return (new);
}
