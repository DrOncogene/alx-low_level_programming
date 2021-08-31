#include "main.h"

/**
 * _abs - computes the absolute of a given number
 * @n: an integer whose absolute value is to be computed
 * Return: the absolute value of the given integer
 */
int _abs(int n)
{
	if (n <= 0)
		n = n * -1;
	return (n);
}
