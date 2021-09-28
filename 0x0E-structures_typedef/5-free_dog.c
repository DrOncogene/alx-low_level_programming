#include "dog.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_dog - frees the memory allocated to a previously created dog
 * @d: the dog
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
