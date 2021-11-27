#include "lists.h"

/**
  * free_dlistint - frees a doubly linked list
  * @head: the list
  * Return: nothing
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *head_hold;

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
