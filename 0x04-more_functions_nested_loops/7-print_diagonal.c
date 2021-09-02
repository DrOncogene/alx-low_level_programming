#include "main.h"

/**
 * print_diagonal - prints a diagonal line with a given number of \
 * @n: number of \ to be printed
 * Return: nothing
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int i;

		i = 1;
		while (i <= n)
		{
			int j;

			for (j = 0; j < (i - 1); j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}
