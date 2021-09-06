#include "main.h"

/**
 * puts_half - prints the last half of a given string
 * @str: given string
 * Return: nothing
 */
void puts_half(char *str)
{
	int i, j;

	i = 0;
	while (*str != 0)
	{
		str++;
		i++;
	}

	if (i % 2 == 1)
		i--;

	str = str - (i / 2);
	for (j = i; j > i / 2; j--)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
