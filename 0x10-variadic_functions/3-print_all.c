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

	va_start(ap, format);

	i = 0;
	while (i < len((char *)format) - 1)
	{
		switch (*(format + i))
		{
			case 'c':
				printf("%c, ", va_arg(ap, int));
				break;
			case 'i':
				printf("%d, ", va_arg(ap, int));
				break;
			case 'f':
				printf("%f, ", va_arg(ap, double));
				break;
			case 's':
				print_str(va_arg(ap, char *));
				printf(", ");
				break;
			default:
				break;
		}

		i++;
	}

	switch (*(format + i))
	{
		case 'c':
			printf("%c\n", va_arg(ap, int));
			break;
		case 'i':
			printf("%d\n", va_arg(ap, int));
			break;
		case 'f':
			printf("%f\n", va_arg(ap, double));
			break;
		case 's':
			print_str(va_arg(ap, char *));
			printf("\n");
			break;
		default:
			break;
	}

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
	if (*s == 0)
		return (0);
	return (len(s + 1) + 1);
}

