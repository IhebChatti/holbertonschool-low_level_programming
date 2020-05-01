#include "lists.h"

/**
 *sum_dlistint - summ nodes of DLL
 *@head: head node
 *
 *Return: sum of nodes
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp;

	if (head == NULL)
		return (0);
	while (head)
	{
		temp = head;
		sum += temp->n;
		head = head->next;
	}
	return (sum);
}
