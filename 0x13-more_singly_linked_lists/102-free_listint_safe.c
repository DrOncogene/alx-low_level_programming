#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
  * free_listint_safe - frees a list including those with a loop
  * @h: the list
  * Return: nothing
  */
size_t free_listint_safe(listint_t **h)
{
	listint_t *head_hold;

	if (head == NULL)
		return;

	while (*head)
	{
		if ((*head)->next == NULL)
		{
			free(*head);
			break;
		}
		head_hold = *head;
		*head = (*head)->next;

		free(head_hold);
	}
	*head = NULL;
}

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
