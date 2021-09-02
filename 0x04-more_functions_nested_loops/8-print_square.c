#include "main.h"

/**
 * print_square - prints a made of a given number of #
 * @size: size of the square
 * Return: nothing
 */
void print_square(int size)
{
	if (size > 0)
	{
		int i;

		i = 0;
		while (i < size)
		{
			int j;

			j = 0;
			while (j < size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}
