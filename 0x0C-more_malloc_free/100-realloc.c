#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _realloc - reallocates memory
 * @ptr: pointer to the memory
 * @old_size: initial size
 * @new_size: new size
 * Return: pointer to reallocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i, len_ptr;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		free(ptr);
		ptr = malloc(new_size);
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	len_ptr = 0;
	p = malloc(new_size);
	if (new_size > old_size)
		len_ptr = old_size / sizeof(char);
	else if (new_size < old_size)
		len_ptr = new_size / sizeof(char);

	for (i = 0; i < len_ptr; i++)
		*(p + i) = *((char *)ptr + i);

	free(ptr);
	return (p);
}
