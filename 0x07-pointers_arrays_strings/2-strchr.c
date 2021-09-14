#include "main.h"

/**
 * _strchr - locates a char in a string
 * @s: the string
 * @c: char to be found
 * Return: pointer to first occurence of c in s or NULL if not found
 */
char *_strchr(char *s, char c)
{
	int len_s, i;

	len_s = 0;
	while (*s != 0)
	{
		len_s++;
		s++;
	}

	s -= len_s;
	for (i = 0; i <= len_s; i++)
	{
		if (*s == c)
			return (s);
		s++;
	}

	return ('\0');
}
