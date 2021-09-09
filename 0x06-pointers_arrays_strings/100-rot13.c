#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: given string
 * Return: pointer to encoded string
 */
char *rot13(char *s)
{
	char l[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
	'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	char u[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
	'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	char *c;
	int i;

	c = s;
	while (*s != 0)
	{
		for (i = 0; i < 26; i++)
		{
			if (*s == l[i] && i < 13)
			{
				*s = l[(i + 13)];
				break;
			}
			else if (*s == l[i] && i >= 13)
			{
				*s = l[(i + 13) % 26];
				break;
			}
			else if (*s == u[i] && i < 13)
			{
				*s = u[(i + 13)];
				break;
			}
			else if (*s == u[i] && i >= 13)
			{
				*s = u[(i + 13) % 26];
				break;
			}
		}
		s++;
	}

	return (c);
}
