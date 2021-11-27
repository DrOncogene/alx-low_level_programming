#include "lists.h"

/**
  * get_dnodeint_at_index - gets a node at a given index
  * @head: the list
  * @index: given index
  * Return: pointer to the node at index
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	node = head;
	for (i = 0; i < index; i++)
	{
		node = node->next;
		if (node == NULL && i != index - 1)
			return (NULL);
	}

	return (node);
}
