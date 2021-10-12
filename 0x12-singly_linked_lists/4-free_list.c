#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
  * free_list - frees a list
  * @head: the list
  * Return: nothing
  */
void free_list(list_t *head)
{
	list_t *head_hold;

	while (head)
	{
		if (head->next == NULL)
		{
			free(head->str);
			free(head);
			break;
		}
		head_hold = head;
		head = head->next;

		free(head_hold->str);
		free(head_hold);
	}
}
