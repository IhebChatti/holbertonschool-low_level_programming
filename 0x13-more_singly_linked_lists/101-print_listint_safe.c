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
	const listint_t *temp;

	if (head == NULL)
		exit(98);
	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		temp = head;
		head = head->next;
		if (temp <= head)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;
		}
		i++;
	}
return (i);
}
