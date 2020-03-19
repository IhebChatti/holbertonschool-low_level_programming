#include "lists.h"

/**
 *add_node_end - create a node at the end of linked list
 *@head: head node of the linked list
 *@str: string to be added at tail
 *
 *Return: pointer to head of list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	temp = *head;
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
	return (new);
}
