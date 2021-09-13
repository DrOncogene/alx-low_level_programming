#include "main.h"

/**
 * _strchr - locates a char in a string
 * @s: the string
 * @c: char to be found
 * Return: pointer to first occurence of c in s or NULL if not found
 */
char *_strchr(char *s, char c)
{
	while (*s != 0)
	{
		if (*s == c)
			return (s);

		s++;
	}

	return ('\0');
}
