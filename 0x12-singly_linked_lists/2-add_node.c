#include "lists.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

/**
  * add_node - adds a new node at the begining of a list
  * @head: head of the list
  * @str: string value of the new node
  * Return: pointer to new element or NULL
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new != NULL)
	{
		new->next = *head;
		new->str = strdup(str);
		new->len = strlen(str);
	}
	else
		return (NULL);

	return (new);
}
