#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
  * free_listint2 - frees a list
  * @head: the list
  * Return: nothing
  */
void free_listint2(listint_t **head)
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
