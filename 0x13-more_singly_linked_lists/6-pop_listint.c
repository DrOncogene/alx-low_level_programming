#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
  * pop_listint - deletes the head of a list
  * @head: the head
  * Return: the data in the head
  */
int pop_listint(listint_t **head)
{
	listint_t *head_hold;
	int len, n;

	if (*head == NULL)
		return (0);
	len = 0;
	n = (*head)->n;
	head_hold = *head;
	while (head_hold)
	{
		head_hold = head_hold->next;
		len++;
	}

	if (len == 0)
		return (0);
	head_hold = (*head)->next;
	free(*head);
	*head = head_hold;

	return (n);
}
