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
	int i;
	char *s;

	i = 0;
	va_start(ap, format);
	while (i < len((char *)format))
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
				s = va_arg(ap, char *);
				print_str(s);
				break;
			default:
				break;
		}

		if (i != len((char *)format) - 1)
		{
			switch (*(format + i))
			{
				case 'c':
				case 'i':
				case 'f':
				case 's':
					printf(", ");
					break;
				default:
					break;
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
	if (s == NULL)
	{
		printf("(nil)");
		return;
	}

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
	int len_s;
	char *s_hold;

	len_s = 0;
	s_hold = (char *)s;
	while (*s_hold != 0)
	{
		len_s++;
		s_hold++;
	}

	return (len_s);
}

