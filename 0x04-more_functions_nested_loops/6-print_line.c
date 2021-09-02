#include "main.h"

/**
 * print_line - prints a given number of _ to make a straight line
 * @n: the number of _ to be printed
 * Return: nothing
 */
void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
			_putchar('_');
		_putchar('\n');
	}
	else
		_putchar('\n');
}
