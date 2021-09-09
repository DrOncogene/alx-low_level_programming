#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses the content of an array
 * @a: the array
 * @n: array length
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int b, i, *last;

	last = a + n - 1;

	for (i = 0; i < n / 2; i++)
	{
		b = *a;
		*a = *last;
		*last = b;

		a++;
		last--;
	}
}
