#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>

void print_str(char *s);
int len(char *s);
/**
  * print_all - prints all passed arguments based of formats given
  * @format: the format string
  * Return: nothing
  */
void print_all(const char *const format, ...)
{
	va_list ap;
	int i, len_f;

	va_start(ap, format);
	len_f = len((char *)format);
	i = 0;
	while (i < len_f)
	{
		switch (*(format + i))
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				print_str(va_arg(ap, char *));
				break;
		}

		if (i != len_f - 1)
		{
			switch (*(format + i))
			{
				case 'c':
				case 'i':
				case 'f':
				case 's':
					printf(", ");
			}
		}

		i++;
	}

	printf("\n");
	va_end(ap);
}

/**
  * print_str - prints a given string
  * @s: the string
  * Return: nothing
  */
void print_str(char *s)
{
	STR_NULL;

	while (*s != 0)
	{
		printf("%c", *s);
		s++;
	}
}

/**
  * len - find the length of a string
  * @s: the string
  * Return: len
  */
int len(char *s)
{
	if (s == NULL || *s == 0)
		return (0);
	return (len(s + 1) + 1);
}

