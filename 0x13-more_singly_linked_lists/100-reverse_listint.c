#include "lists.h"

/**
 *reverse_listint - function that reverse a listint_t
 *@head: head of the linked list
 *
 *Return: reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *temp, *nxt = NULL;

	temp = *head;
	while (temp != NULL)
	{
		nxt = temp->next;
		temp->next = prev;
		prev = temp;
		temp = nxt;
	}
	*head = prev;
	return (prev);
}
