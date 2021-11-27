#include "lists.h"

/**
  * add_dnodeint_end - adds a new node at the end of a dl list
  * @head: the head of the list
  * @n: the int data of the new node
  * Return: address of new node or NULL
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		printf("Could not allocated memory\n");
		return (NULL);
	}

	last = *head;
	while (last && last->next)
		last = last->next;

	new->n = n;
	new->next = NULL;
	new->prev = last;
	if (last != NULL)
		last->next = new;
	else
		*head = new;

	return (new);
}
