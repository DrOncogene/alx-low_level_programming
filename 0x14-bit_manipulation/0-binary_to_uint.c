#include "main.h"
#include <stdlib.h>
#include <stddef.h>

int len(char *s);
/**
  * binary_to_uint - converts a binary to an unsigned int
  * @b: a string of the binary number
  * Return: the result of the conversion or NULL
  */
unsigned int binary_to_uint(const char *b)
{
	int i, j, digit;
	unsigned int num;

	i = len((char *)b);
	num = 0;
	if (b == NULL || i == 0)
		return (0);

	for (--i, j = 0; i >= 0; i--, j++)
	{
		if (b[j] == '1')
			digit = 1;
		else
			digit = 0;
		num += (digit << i);
	}

	return (num);
}

/**
  * len - finds the length of a string
  * @s: string
  * Return: length of s
  */
int len(char *s)
{
	int i;

	i = 0;
	if (s == NULL || *s == 0)
		return (0);

	while (*s != 0)
	{
		if (*s != '1' && *s != '0')
			return (0);
		i++;
		s++;
	}

	return (i);
}
