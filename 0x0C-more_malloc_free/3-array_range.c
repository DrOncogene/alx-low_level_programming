#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_range - creates an array in the range of min to max
 * @min: lowest
 * @max: end of range
 * Return: pointer to the array
 */
int *array_range(int min, int max)
{
	int *ar, i, len_ar;

	if (min > max)
		return (NULL);
	len_ar = max - min + 1;
	ar = calloc(len_ar, sizeof(int));

	for (i = 0; i < len_ar; i++)
		*(ar + i) = min + i;

	return (ar);
}
