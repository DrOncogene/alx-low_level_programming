#include "dog.h"
#include <stdlib.h>

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

	new = malloc(sizeof(struct dog));
	new->name = name;
	new->age = age;
	new->owner = owner;

	return (new);
}
