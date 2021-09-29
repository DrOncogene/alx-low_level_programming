#include "function_pointers.h"
#include <stddef.h>

/**
  * print_name - prints a given name
  * @name: the name
  * @f: pointer to a function
  * Return: nothing
  */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
