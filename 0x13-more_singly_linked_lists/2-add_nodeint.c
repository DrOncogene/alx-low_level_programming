#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
  * add_nodeint - adds a new node at the begining of a list
  * @head: head of the list
  * @n: int value of the new node
  * Return: pointer to new element or NULL
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new != NULL)
	{
		new->next = *head;
		new->n = n;
		*head = new;
	}
	else
		return (NULL);

	return (*head);
}
