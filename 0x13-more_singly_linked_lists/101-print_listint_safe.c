#include "lists.h"

/**
 *print_listint_safe - print a listint_t with loop
 *@head: head of linked list
 *
 *Return: number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	const listint_t *temp, *clone;

	clone = head;
	while (clone != NULL)
	{
		printf("[%p] %d\n", (void *)clone, clone->n);
		temp = clone;
		clone = clone->next;
		if (temp <= clone)
		{
			printf("-> [%p] %d\n", (void *)clone, clone->n);
			break;
		}
		i++;
	}
return (i);
}
