#include "main.h"

/**
 * create_array - creates an array
 * @size: size of array
 * @c: char to initialze the array with
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	int *ar, i;

	if (size == 0)
		return (NULL);

	ar = malloc(sizeof(int) * size);
	i = 0;
	while (i < size)
	{
		ar[i] = c;
		i++;
	}

	return (ar);
}
