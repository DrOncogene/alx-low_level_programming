#include "main.h"

/**
  * flip_bits - returns the number of bits of n to be flipped to get m
  * @n: the number
  * @m: the target number
  * Return: number of bits needed to be flipped
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a, c;
	unsigned int d;
	int b;

	d = 0;
	for (b = 63; b >= 0; b--)
	{
		a = n >> b;
		c = m >> b;

		if ((a & 1) != (c & 1))
			d++;
	}

	return (d);
}
