#include "dog.h"
#include <stdlib.h>

char *copy(char *src);
/**
 * new_dog - creates a new dog type from the given parameters
 * @name: the name
 * @age: age
 * @owner: owner
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *new;

	char *new_name = copy(name);
	char *new_owner = copy(owner);

	new = malloc(sizeof(struct dog));
	new->name = new_name;
	new->age = age;
	new->owner = new_owner;

	return (new);
}

/**
 * copy - copies the content of src to a new memory location
 * @src: location to be copied
 * Return: pointer to the new location
 */
char *copy(char *src)
{
	int len, i;
	char *src_hold, *dest;

	len = 0;
	src_hold = src;
	while (*src_hold != 0)
	{
		len++;
		src_hold++;
	}

	dest = malloc(sizeof(char) * (len + 1));
	if (dest != NULL)
	{
		for (i = 0; i < len; i++)
			*(dest + i) = *(src + i);
		*(dest + i) = '\0';
	}

	return (dest);
}
