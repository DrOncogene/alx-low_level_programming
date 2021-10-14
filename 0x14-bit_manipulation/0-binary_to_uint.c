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
	int i, j, k, digit;
	unsigned int num, pow;

	i = len((char *)b);
	if (b == NULL || i == 0)
		return (0);
	num = 0;
	pow = 1;
	for (--i, j = 0; i >= 0; i--, j++)
	{
		for (k = i ; k > 0; k--)
			pow *= 2;
		if (b[j] == '1')
			digit = 1;
		else
			digit = 0;
		num += (digit * pow);
		pow = 1;
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
	while (*s != 0)
	{
		if (*s != '1' && *s != '0')
			return (0);
		i++;
		s++;
	}

	return (i);
}
