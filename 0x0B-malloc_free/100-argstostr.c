#include "main.h"
#include <stdlib.h>
#include <stddef.h>

int len(char *s);
/**
 * argstostr - concats all passed arguments
 * @ac: arg count
 * @av: arg vector
 * Return: pointer to the resulting string
 */
char *argstostr(int ac, char **av)
{
	char *s, *s_hold;
	int i, j, len_s;

	len_s = 0;
	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len_s += len(av[i]);
	}
	s = malloc(sizeof(char) * (len_s + ac));
	s_hold = s;

	if (s != NULL)
	{
		for (i = 0; i < ac; i++)
		{
			j = 0;
			while (j < len(av[i]))
			{
				*s_hold = *(av[i] + j);
				s_hold++;
				j++;
			}
			if (i == ac)
				*s_hold = '\0';
			else
				*s_hold = '\n';
			s_hold++;
		}
	}

	return (s);
}

/**
 * len - finds the length of a string
 * @s: the string
 * Return: length of s
 */
int len(char *s)
{
	if (*s == 0 || s == NULL)
		return (0);

	return (len(s + 1) + 1);
}
