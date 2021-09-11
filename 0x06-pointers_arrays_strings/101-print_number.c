#include "main.h"
#include <stdio.h>

/**
 * print_number - print any given integer with only putchar
 * @n: integer to be printed
 * Return: nothing
 */
void print_number(int n)
{
	/*char *s = " ";*/
	unsigned int i;

	if (n < 0)
	{
		_putchar('-');
		i = n;
	}
	else
		i = n;

	if (i / 10)
		print_number(i / 10);
	_putchar(i % 10 + '0');
}
