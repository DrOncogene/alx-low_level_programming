#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

unsigned int len(const char *s);
/**
  * print_numbers - print a given set of numbers with a separator
  * @separator: the separator
  * @n: number of optional args passed
  * Return: nothing
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, j;
	int num;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(ap, int);
		printf("%d", num);
		if (separator != NULL)
			if (i != n - 1)
				for (j = 0; j < len(separator); j++)
					printf("%c", *(separator + j));
	}
	va_end(ap);
	printf("%c", '\n');
}

/**
  * len - finds the length of a string
  * @s: string
  * Return: length
  */
unsigned int len(const char *s)
{
	if (*s == 0)
		return (0);
	return (len(s + 1) + 1);
}
