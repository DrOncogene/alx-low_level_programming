#include "main.h"

/**
 * _puts - prints a string followed by a newline to stdout
 * @str: string to be printed
 * Return: nothing
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (*str != 0)
	{
		_putchar(*str);
		str++;
		i++;
	}
	_putchar('\n');
}
