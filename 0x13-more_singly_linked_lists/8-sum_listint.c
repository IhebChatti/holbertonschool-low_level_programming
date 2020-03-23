#include "lists.h"

/**
 *sum_listint - sum of the all the data of listint_t
 *@head: head of the linked list
 *
 *Return: sum of data on success, 0 if list empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		temp = head;
		sum += temp->n;
		head = head->next;
	}
	return (sum);
}
