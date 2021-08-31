#include "main.h"

/**
 * print_sign - checks and prints the sign of a given integer
 * @n: an integer to be checked
 * Return: 1 if positive, 0 if zero and -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	} else if (n == 0)
	{
		_putchar(48);
		return (0);
	} else 
	{
		_putchar(45);
		return (-1);
	}

}
