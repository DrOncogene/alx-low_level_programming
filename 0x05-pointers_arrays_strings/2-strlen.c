#include "main.h"

/**
 * _strlen - returns the length of a given string
 * @s: string for which length is to be calculated
 * Return: length of s
 */
int _strlen(char *s)
{
	char c;
	int i;

	c = *s;
	i = 0;
	while (c != 0)
	{
		s++;
		c = *s;
		i++;
	}
	return (i);
}
