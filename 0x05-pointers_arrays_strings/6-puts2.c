#include "main.h"

/**
 * puts2 - prints every other character of a given string
 * @str: given string
 * Return: nothing
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (*str != 0)
	{
		i++;
		if (i % 2 == 1)
			_putchar(*str);
		str++;
	}
	_putchar('\n');
}
