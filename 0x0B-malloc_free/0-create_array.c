#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - creates an array
 * @size: size of array
 * @c: char to initialze the array with
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ar = malloc(sizeof(char) * size);
	if (ar != NULL)
	{
		i = 0;
		while (i < size)
		{
			ar[i] = c;
			i++;
		}
	}
	return (ar);
}
