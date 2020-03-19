#include "lists.h"

/**
 *add_node - function that adds a new node at the beginning of LL
 *@head: head of list
 *@str: string to be put at the head
 *
 *Return: 0 on success
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->next = *head;
	new->str = strdup(str);
	new->len = strlen(str);
	*head = new;
	return (new);
}
