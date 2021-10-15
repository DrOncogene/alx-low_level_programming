#include "main.h"

/**
  * set_bit - finds and returns a bit at an index
  * @n: the number
  * @index: index of bit to be returned
  * Return: bit at index or -1
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (*n == 0 && index == 0)
	{
		*n |= 1 << index;
		return (1);
	}
	else if (n == 0 || index > 63)
		return (-1);

	*n |= 1 << index;

	return (1);
}
