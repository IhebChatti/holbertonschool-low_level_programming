#include "lists.h"

/**
 *_strlen - function that counts the lenght of a string
 *@str: string to be counted
 *
 *Return: count
 */

int _strlen(const char *str)
{
	int i;

	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 *add_node - function that adds a new node at the beginning of LL
 *@head: head of list
 *@str: string to be put at the head
 *
 *Return: pointer to new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->next = *head;
	new->str = strdup(str);
	new->len = _strlen(str);
	*head = new;
	return (new);
}
