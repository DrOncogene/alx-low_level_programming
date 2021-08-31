#include "main.h"

/**
 * print_last_digit - prints the last digit of a given int
 * @n: integer whose last digit is to be printed
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int last;

	last = (n * -1) % 10;
	_putchar('0' + last);
	return (last);
}
