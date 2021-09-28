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
	dog_t *dog;
	char *new_name = copy(name);
	char *new_owner = copy(owner);

	dog = malloc(sizeof(struct dog));
	if (dog != NULL)
	{
		dog->name = new_name;
		dog->age = age;
		dog->owner = new_owner;
	}
	else
	{
		free(new_name);
		free(new_owner);
	}

	return (dog);
}

/**
 * copy - copies the content of src to a new memory location
 * @src: location to be copied
 * Return: pointer to the new location
 */
char *copy(char *src)
{
	int len, i;
	char *dest;

	len = 0;
	while (*src != 0)
	{
		len++;
		src++;
	}

	src -= len;
	dest = malloc(sizeof(char) * (len + 1));
	if (dest != NULL)
	{
		for (i = 0; i < len; i++)
			*(dest + i) = *(src + i);
		*(dest + i) = '\0';
	}

	return (dest);
}
