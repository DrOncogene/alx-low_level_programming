#include "main.h"

/**
  * clear_bit - sets a bit at an index to 0
  * @n: the number
  * @index: index of bit to be cleared
  * Return: 1 or -1
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (*n == 0 && index == 0)
	{
		*n &= ~(1 << index);
		return (1);
	}
	else if (*n == 0 || index > 63)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
