#include "lists.h"
#include <stddef.h>

/**
  * reverse_listint - reverses a linked list
  * @head: head of the list
  * Return: poiner to the first node
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	if (*head == NULL || !((*head)->next))
		return (*head);
	prev = (*head)->next;
	(*head)->next = NULL;
	next = prev->next;
	prev->next = *head;
	while (next)
	{
		*head = prev;
		prev = next;
		next = next->next;
		prev->next = *head;
	}

	*head = prev;
	return (*head);
}
