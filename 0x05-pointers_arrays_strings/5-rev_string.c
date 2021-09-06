#include "main.h"

/**
 * rev_string - reverses a given string
 * @s: the string to be reversed
 * Return: nothing
 */
void rev_string(char *s)
{
	int i, j;
	char *first, *last, c;

	first = s;
	i = 0;
	while (*s != 0)
	{
		s++;
		i++;
	}
	last = s - 1;

	for (j = 0; j < i / 2; j++)
	{
		c = *first;
		*first = *(last - j);
		*(last - j) = c;
		first++;
	}
}
