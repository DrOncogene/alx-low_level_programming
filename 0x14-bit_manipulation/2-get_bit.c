#include "main.h"

/**
  * get_bit - finds and returns a bit at an index
  * @n: the number
  * @index: index of bit to be returned
  * Return: bit at index or -1
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int a, b;
	int c;

	if (n == 0 && index == 0)
		return (0);
	else if (n == 0)
		return (-1);

	for (c = 63; c >= 0; c--)
	{
		a = n >> c;

		b = c;
		if (b == index)
		{
			if (a & 1)
				return (1);
			else
				return (0);
		}
	}

	return (-1);
}
