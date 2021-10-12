#include "lists.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
  * add_node_end - adds a new node at the end of a list
  * @head: head of the list
  * @str: string value of the new node
  * Return: pointer to new element or NULL
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last;

	new = malloc(sizeof(list_t));
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
		new->str = strdup(str);
		new->len = strlen(str);
		if (last == NULL)
			*head = new;
		else
			last->next = new;

		return (new);
	}
	else
		return (NULL);
}
