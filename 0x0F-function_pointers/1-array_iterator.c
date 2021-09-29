#include "function_pointers.h"
#include <stddef.h>

/**
  * array_iterator - iterates through a given array using a passed function
  * @array: the array
  * @size: size of array
  * @action: function to be called
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL || size == 0)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
