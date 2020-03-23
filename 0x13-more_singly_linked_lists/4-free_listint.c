#include "lists.h"

/**
 *free_listint - frees a linked list
 *@head: head of linked list
 *
 *Return: Void
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
