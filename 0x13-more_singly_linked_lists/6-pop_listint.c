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

	if (head == NULL)
		return (0);
	temp = *head;
	*head = (*head)->next;
	data = temp->n;
	return (data);
}
