#include "function_pointers.h"
#include <stddef.h>

/**
  * int_index - prints the index of an integer found by a passed function
  * @array: array of integers
  * @size: size of array
  * @cmp: the compare function
  * Return: index of found int, -1 if size<=0 or no int found
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, found;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);

	found = 0;
	for (i = 0; i < size; i++)
	{
		found = cmp(array[i]);
		if (found != 0)
			return (i);
	}

	return (-1);
}
