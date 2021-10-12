#include "lists.h"
#include <stddef.h>

/**
  * get_nodeint_at_index - gets a node at an index
  * @head: the head of the list
  * @index: index of element to be returned
  * Return: element at index or NULL if element doesn't exist
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *head_hold;
	unsigned int i;

	head_hold = head;
	for (i = 0; i < index; i++)
	{
		if (head_hold == NULL)
			return (NULL);
		head_hold = head_hold->next;
	}

	return (head_hold);
}
