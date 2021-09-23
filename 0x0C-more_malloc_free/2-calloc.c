#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _calloc - allocates nmemb number of memory of size size
 * @nmemb: number of units to allocate
 * @size: size of each unit
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		*(p + i) = 0;

	return ((void *)p);
}
