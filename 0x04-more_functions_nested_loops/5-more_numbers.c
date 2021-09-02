#include "main.h"

/**
 * more_numbers - prints the numbers 0-14 ten times
 * none
 * Return: nothing
 */
void more_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		int nums[15] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9,
			10, 11, 12, 13, 14};
		int j;

		for (j = 0; j < 15; j++)
		{
			if ((nums[j] / 10) != 0)
				_putchar((nums[j] / 10) + '0');
			_putchar((nums[j] % 10) + '0');
		}
		_putchar('\n');
		i++;
	}
}
