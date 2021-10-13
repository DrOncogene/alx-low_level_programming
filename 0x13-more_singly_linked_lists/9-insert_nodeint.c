#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

unsigned int len_list(listint_t *head);
/**
  * insert_nodeint_at_index - insert a new node at an index
  * @head: head of list
  * @idx: index to insert at
  * @n: int value of the new node
  * Return: pointer to the new node or NULL
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *prev, *next, *head_hold;
	unsigned int i, len;

	len = len_list(*head);
	head_hold = *head;
	if (head == NULL || idx > len)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new != NULL)
	{
		new->n = n;
		if (idx == 0)
		{
			new->next = *head;
			*head = new;
			return (new);
		}
		for (i = 1; i < idx; i++)
		{
			if (head_hold->next == NULL)
				break;
			head_hold = head_hold->next;
		}

		if (i == idx)
		{
			prev = head_hold;
			next = head_hold->next;

			prev->next = new;
			new->next = next;
		}
	}
	else
		return (NULL);

	return (new);
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
