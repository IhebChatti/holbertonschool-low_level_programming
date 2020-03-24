#include "lists.h"

/**
 *reverse_listint - function that reverse a listint_t
 *@head: head of the linked list
 *
 *Return: reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *nxt = NULL;

	while (*head != NULL)
	{
		nxt = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = nxt;
	}
	*head = prev;
	return (*head);
}
