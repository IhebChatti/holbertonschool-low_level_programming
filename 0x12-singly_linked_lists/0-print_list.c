#include "lists.h"

/**
 *print_list - function that prints all elements of a list
 *@h: the linked list to be printed
 *
 *Return: size of the list
**/

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
