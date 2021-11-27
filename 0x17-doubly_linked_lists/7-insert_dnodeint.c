#include "lists.h"

unsigned int list_len(dlistint_t *head);
/**
  * insert_dnodeint_at_index - inserts a new node at a given index
  * @h: the head of the list
  * @idx: insertion index
  * @n: int value of the new node
  * Return: pointer to the inserted node
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int len, i;
	dlistint_t *next, *previous, *new;

	len = list_len(*h);
	if (idx > len)
		return (NULL);
	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	else if (idx == len)
	{
		new = add_dnodeint_end(h, n);
		return (new);
	}

	previous = *h;
	for (i = 0; i < idx - 1; i++)
	{
		previous = previous->next;
		if (previous == NULL)
			return (NULL);
	}
	next = previous->next;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	previous->next = new;
	new->n = n;
	new->prev = previous;
	new->next = next;
	if (next != NULL)
		next->prev = new;

	return (new);
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

	if (head == NULL)
		return (0);
	len = 0;
	curr = head;
	while (curr)
	{
		len++;
		curr = curr->next;
	}

	return (len);
}
