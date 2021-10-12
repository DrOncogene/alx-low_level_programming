#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
  * print_listint - prints a singly linked list
  * @h: head of the list
  * Return: number of elements in the list
  */
size_t print_listint(const listint_t *h)
{
	unsigned int len;

	len = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);

		h = h->next;
		len++;
	}

	return (len);
}
