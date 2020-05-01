#include "lists.h"

/**
 *dlistint_len - counts lenght of doubly linked list
 *@h: head node
 *
 *Return: lenght size_t
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}
