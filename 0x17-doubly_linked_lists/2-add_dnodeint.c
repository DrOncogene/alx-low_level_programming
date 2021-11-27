#include "lists.h"

/**
  * add_dnodeint - adds a new node at the beginning of a dl list
  * @head: the head of the list
  * @n: the int data of the new node
  * Return: address of new node or NULL
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		printf("Could not allocated memory\n");
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (*head);
}
