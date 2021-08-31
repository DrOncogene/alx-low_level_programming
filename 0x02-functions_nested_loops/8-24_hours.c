#include "main.h"

/**
 * jack_bauer - prints every minutes of the day from 00:00 to 23:59
 * none
 * Return: nothing
 */
void jack_bauer(void)
{
	int d1;
	int d2;
	int d3;
	int d4;

	for (d1 = 48; d1 <= 57; d1++)
	{
		for (d2 = 48; d2 <= 57; d2++)
		{
			for (d3 = 48; d3 <= 57; d3++)
			{
				for (d4 = 48; d4 <= 57; d4++)
				{
					_putchar(d1);
					_putchar(d2);
					_putchar(':');
					_putchar(d3);
					_putchar(d40);
					_putchar('\n');
				}
			}
		}
	}
}
