#include "lists.h"
#include <stddef.h>

/**
  * listint_len - returns the number of elements in a linked list
  * @h: the list
  * Return: number of elements in h
  */
size_t listint_len(const listint_t *h)
{
	size_t len;

	len = 0;
	while (h != NULL)
	{
		len++;
		h = h->next;
	}

	return (len);
}
