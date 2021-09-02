#include "main.h"

/**
 * print_triangle - prints a triangle with a given number of #
 * @size: size of the triangle
 * Return: nothing
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int i;

		i = 1;
		while (i <= size)
		{
			int j;
			int k;

			for (j = (size - i); j > 0; j--)
				_putchar(' ');
			for (k = 0; k < i; k++)
				_putchar('#');
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}
