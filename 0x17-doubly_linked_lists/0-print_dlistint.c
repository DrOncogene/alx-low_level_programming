#include "lists.h"

/**
  * print_dlistint - prints a doubly linked list
  * @h: the list
  * Return: number of nodes in the list
  */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n;

	n = 0;
	if (h == NULL)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}

	return (n);
}
