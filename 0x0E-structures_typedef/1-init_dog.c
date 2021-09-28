#include "dog.h"
#include <stddef.h>

/**
 * init_dog - creates a variable of type dog
 * @d: the struct to be created
 * @name: dog name
 * @age: age
 * @owner: owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
