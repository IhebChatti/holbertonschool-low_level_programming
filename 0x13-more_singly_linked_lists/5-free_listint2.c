#include "lists.h"

/**
 *free_listint2 - frees a linked list
 *@head: head of linked list
 *
 *Return: Void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	head = NULL;
}
