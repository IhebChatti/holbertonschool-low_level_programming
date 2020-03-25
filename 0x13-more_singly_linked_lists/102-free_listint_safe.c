#include "lists.h"

/**
 *free_listint_safe - frees a listint_t safely
 *@h: head of linked list
 *
 *Return: size of list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
	size_t i = 0;
	listint_t *temp;

	temp = *h;
	if (h == NULL)
		return (0);
	while (*h)
	{
		if (temp <= (*h)->next)
		{
			free(temp);
			*h = NULL;
			i++;
			break;
		}
		*h = (*h)->next;
		free(temp);
		temp = *h;
		i++;
	}
	h = NULL;
	return (i);
}
