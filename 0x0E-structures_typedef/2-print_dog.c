#include "dog.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_dog - prints a dog struct
 * @d: the dog
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("%s: %s\n", "Name", "(nil)");
	else
		printf("%s: %s\n", "Name", d->name);

	if (&d->age == NULL)
		printf("%s: %s\n", "Age", "(nil)");
	else
		printf("%s: %f\n", "Age", d->age);

	if (d->owner == NULL)
		printf("%s: %s\n", "Owner", "(nil)");
	else
		printf("%s: %s\n", "Owner", d->owner);
}
