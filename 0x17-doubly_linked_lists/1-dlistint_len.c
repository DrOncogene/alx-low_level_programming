#include "lists.h"

/**
  * dlistint_len - returns the length of a dl list
  * @h: the list
  * Return: length of h
  */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len;

	len = 0;
	if (h == NULL)
		return (0);
	while (h)
	{
		len++;
		h = h->next;
	}

	return (len);
}
