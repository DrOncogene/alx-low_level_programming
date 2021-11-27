#include "lists.h"

/**
  * sum_dlistint - sums int datas of all nodes in a dll
  * @head: the list
  * Return: the sum
  */
int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *curr;

	sum = 0;
	curr = head;
	while (curr)
	{
		sum += curr->n;
		curr = curr->next;
	}

	return (sum);
}
