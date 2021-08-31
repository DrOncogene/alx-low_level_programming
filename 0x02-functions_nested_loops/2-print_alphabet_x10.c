#include "main.h"

/**
 * print_alphabet_x10 - prints the lowercase alphabet 10 times
 * none
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	int j;

	j = 0;
	while (j < 10)
	{
		int i;

		for (i = 97; i <= 122; i++)
			_putchar(i);
		_putchar('\n');
		j++;
	}
}
