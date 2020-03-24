#include "lists.h"

/**
 *pop_listint - delete the head of a listint_t
 *@head: head of linked list
 *
 *Return: head node's data
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL || head == NULL)
		return (0);
	temp = *head;
	data = temp->n;
	*head = (*head)->next;
	free(temp);
	return (data);
}
