#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: given string
 * Return: pointer to encoded string
 */
char *leet(char *s)
{
	char l[] = "aeotl";
	char u[] = "AEOTL";
	char code[] = "43071";
	char *c;
	int i;

	c = s;
	while (*s != 0)
	{
		for (i = 0; i < 5; i++)
		{
			if (*s == l[i] || *s == u[i])
			{
				*s = code[i];
			}
		}
		s++;
	}

	return (c);
}
