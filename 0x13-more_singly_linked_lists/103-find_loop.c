#include "lists.h"

/**
 *find_listint_loop - detects a loop in listint_t
 *@head: head of the linked list
 *
 *Return: address of the node where loops starts on success
 *NULL on failure
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	slow = head->next;
	fast = head->next->next;
	while (slow && fast)
	{
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (slow);
		}
		slow = slow->next;
		fast = fast->next->next;
	}
	return (NULL);
}
