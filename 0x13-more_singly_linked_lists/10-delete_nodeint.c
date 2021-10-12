#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

unsigned int len_list(listint_t *head);
/**
  * delete_nodeint_at_index - deletes a node at an index
  * @head: head of list
  * @index: index of node to be deleted
  * Return: 1 if success, -1 otherwise
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *prev, *next, *head_hold;
	unsigned int i, len;

	len = len_list(*head);
	head_hold = *head;
	if (*head == NULL || index > len - 1)
		return (-1);

	if (index == 0)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}

	for (i = 1; i < index; i++)
	{
		if (head_hold->next == NULL)
			break;
		head_hold = head_hold->next;
	}

	if (index == i)
	{
		prev = head_hold;
		node = head_hold->next;
		next = node->next;

		free(node);
		prev->next = next;
	}

	return (1);
}

/**
  * len_list - finds the length of a list
  * @head: head of the list
  * Return: the length
  */
unsigned int len_list(listint_t *head)
{
	listint_t *head_hold;
	unsigned int len;

	len = 0;
	head_hold = head;
	while (head)
	{
		len++;
		head = head->next;
	}

	head = head_hold;
	return (len);
}
