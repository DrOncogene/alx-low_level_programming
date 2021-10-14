#include "lists.h"
#include <stddef.h>

/**
  * find_listint_loop - checks whether a linked list contains a loop or not
  * @head: head of the loop
  * Return: 1 if there is a loop or 0 if not
  */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow_p, *fast_p;

	slow_p = fast_p = head;
	while (slow_p && fast_p && fast_p->next)
	{
		slow_p = slow_p->next;
		fast_p = fast_p->next->next;
		if (slow_p == fast_p)
		{
			slow_p = head;
			while (slow_p != fast_p)
			{
				slow_p = slow_p->next;
				fast_p = fast_p->next;
			}
			return (fast_p);
		}
	}

	return (NULL);
}
