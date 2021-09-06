#include "main.h"

/**
 * swap_int - swaps the values of two given integers
 * @a: first integer
 * @b: second int
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int n1, n2;

	n1 = *a;
	n2 = *b;
	*a = n2;
	*b = n1;
}
