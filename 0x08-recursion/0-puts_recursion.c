#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: pointer to the string
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;

	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	_puts_recursion((char *)s);
}
