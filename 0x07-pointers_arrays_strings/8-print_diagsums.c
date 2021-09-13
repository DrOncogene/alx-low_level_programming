#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print diagonal sums of a given size from MD array
 * @a: the array
 * @size: the extent of the diagonal sum
 */
void print_diagsums(int *a, int size)
{
	int i, sum1, sum2, *a_hold;

	a_hold = a;
	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
	{
		sum1 += *a;
		a += size + 1;
	}


	a = a_hold + size - 1;
	for (i = 0; i < size; i++)
	{
		sum2 += *a;
		a += size - 1;
	}

	printf("%d, %d\n", sum1, sum2);
}
