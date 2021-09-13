#include "main.h"

/**
 * _strpbrk - find the first occurrence of any byte in accept in s
 * @s: the string
 * @accept: string of chars to look for
 * Return: pointer to byte in s that matches
 */
char *_strpbrk(char *s, char *accept)
{
	int len_acc, i;

	len_acc = 0;

	while (*accept != 0)
	{
		len_acc++;
		accept++;
	}
	while (*s != 0)
	{
		for (i = len_acc; i > 0; i--)
			if (*s == *(accept - i))
				return (s);
		s++;
	}

	return ('\0');
}
