#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be checked
 * @accept: substring to be matched
 * Return: the length of substring that matches chars in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len_acc, len, i, found;

	len = 0;
	len_acc = 0;
	while (*accept != 0)
	{
		len_acc++;
		accept++;
	}

	while (*s != 0)
	{
		found = 0;
		for (i = 0; i < len_acc; i++)
			if (*s == *(accept - len_acc + i))
				found = 1;
		if (found == 1)
			len++;
		else
			break;

		s++;
	}

	return (len);
}
