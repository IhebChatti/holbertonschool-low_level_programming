#include "lists.h"

/**
 *listint_len - function that counts number of elements of linked list
 *@h: linked list to be counted
 *
 *Return: lenght of the linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t l = 0;

	while (h != NULL)
	{
		h = h->next;
		l++;
	}
	return (l);
}
