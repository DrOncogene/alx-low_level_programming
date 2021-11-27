#include "lists.h"

unsigned int list_len(dlistint_t *head);
/**
  * delete_dnodeint_at_index - inserts a new node at a given index
  * @head: the head of the list
  * @index: insertion index
  * Return: 1 if successful, -1 otherwise
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int len, i;
	dlistint_t *node, *head_hold;

	len = list_len(*head);
	if (index >= len)
		return (-1);

	if (index == 0)
	{
		if (*head)
		{
			if ((*head)->next)
				(*head)->next->prev = NULL;
			head_hold = *head;
			*head = (*head)->next;
			free(head_hold);
		}

		return (1);
	}

	node = *head;
	for (i = 0; i < index; i++)
		node = node->next;

	if (node->next)
		node->next->prev = node->prev;
	node->prev->next = node->next;
	free(node);

	return (1);
}

/**
  * list_len - returns the length of a dl list
  * @head: the list
  * Return: length of list
  */
unsigned int list_len(dlistint_t *head)
{
	unsigned int len;
	dlistint_t *curr;

	len = 0;
	curr = head;
	while (curr)
	{
		len++;
		curr = curr->next;
	}

	return (len);
}
