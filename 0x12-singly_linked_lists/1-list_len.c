#include "lists.h"

/**
 *list_len - function that counts the number of elemnts of a linked list
 *@h: the linked list to be counted
 *
 *Return: lenght of the linked list
 */

size_t list_len(const list_t *h)
{
	size_t l = 0;

	while (h != NULL)
	{
		h = h->next;
		l++;
	}
	return (l);
}
