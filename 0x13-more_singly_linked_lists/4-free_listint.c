#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
  * free_listint - frees a listint
  * @head: the list
  * Return: nothing
  */
void free_listint(listint_t *head)
{
	listint_t *head_hold;

	while (head)
	{
		if (head->next == NULL)
		{
			free(head);
			break;
		}
		head_hold = head;
		head = head->next;

		free(head_hold);
	}
}
