#include "main.h"

/**
 * times_table - prints the 9 times table starting with 0
 * none
 * Return: nothing
 */
void times_table(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		int j;

		j = 0;
		while (j < 10)
		{
			char prod;

			prod = i * j;
			if (j > 0)
				_putchar(' ');
			if ((prod / 10) == 0)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');
			_putchar((prod % 10) + '0');
			if (j < 9)
				_putchar(',');
			j++;
		}
		i++;
	}
}
