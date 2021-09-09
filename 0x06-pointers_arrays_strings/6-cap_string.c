#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: given string
 * Return: pointer to the capitalzed string
 */
char *cap_string(char *s)
{
	char *c;

	c = s;
	while (*s != 0)
	{
		if (*c >= 'a' && *c <= 'z')
			*c = *c - 32;
		if (*s == ' ' || *s == '\t' || *s == '.' || *s == '\n')
		{
			if (*(s + 1) >= 'a' && *(s + 1) <= 'z')
				*(s + 1) = *(s + 1) - 32;
		}
		s++;
	}

	return (c);
}
