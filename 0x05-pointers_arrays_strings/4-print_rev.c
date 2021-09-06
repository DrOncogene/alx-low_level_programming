#include "main.h"

/**
 * print_rev - prints a given string in reverse
 * @s: string to be printed
 * Return: nothing
 */
void print_rev(char *s)
{
	char *last, *first;

	first = s;

	while (*s != 0)
	{
		s++;
	}
	last = s;

	while (first <= last)
	{
		_putchar(*last);
		last--;
	}
	_putchar('\n');
}
