#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
  * add_nodeint_end - adds a new node at the end of a list
  * @head: head of the list
  * @n: int value of the new node
  * Return: pointer to new element or NULL
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	last = *head;
	while (last != NULL)
	{
		if (last->next == NULL)
			break;
		last = last->next;
	}

	if (new != NULL)
	{
		new->next = NULL;
		new->n = n;
		if (last == NULL)
			*head = new;
		else
			last->next = new;

		return (new);
	}
	else
		return (NULL);
}
