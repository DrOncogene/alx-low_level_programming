#include "main.h"

/**
 * string_toupper - conver lowercase to uppercase letters
 * @s: given string
 * Return: pointer to the converted string
 */
char *string_toupper(char *s)
{
	char *c;

	c = s;
	while (*s != 0)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}

	return (c);
}
