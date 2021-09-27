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
	char *dest_hold;

	char *dest = malloc(sizeof(int) * 2);
	dest_hold = dest;
	if (dest != NULL)
	{	
		while (*src != 0)
		{
			*dest = *src;
			dest++;
			src++;
		}
		*dest = '\0';
	}
	
	return (dest_hold);
}
