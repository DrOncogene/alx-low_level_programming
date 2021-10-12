#include "lists.h"
#include <stddef.h>

/**
  * sum_listint - sums the int data of all nodes in a list
  * @head: head of the list
  * Return: sum or 0 if list is empty
  */
int sum_listint(listint_t *head)
{
	listint_t *head_hold;
	int sum;

	sum = 0;
	head_hold = head;

	while (head_hold)
	{
		if (head_hold->next == NULL)
		{
			sum += head_hold->n;
			break;
		}
		sum += head_hold->n;
		head_hold = head_hold->next;
	}

	return (sum);
}
