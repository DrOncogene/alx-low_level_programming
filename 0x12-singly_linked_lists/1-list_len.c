#include "lists.h"
#include <stddef.h>

/**
  * list_len - returns the number of elements in a linked list
  * @h: the list
  * Return: number of elements in h
  */
size_t list_len(const list_t *h)
{
	unsigned int i;

	i = 0;
	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
