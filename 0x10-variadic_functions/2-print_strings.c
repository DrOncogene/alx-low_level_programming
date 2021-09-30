#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

unsigned int len(const char *s);
/**
  * print_strings - print a given set of set of strings with a separator
  * @separator: the separator
  * @n: number of optional strings passed
  * Return: nothing
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, j;
	char *word;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		word = va_arg(ap, char *);
		if (word == NULL || len(word) == 0)
			printf("%s", "(nil)");
		else
			for (j = 0; j < len(word); j++)
				printf("%c", *(word + j));

		if (separator != NULL || len(separator) == 0)
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
