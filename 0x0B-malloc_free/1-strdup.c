#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - allocates a space in memory that contains a given string
 * @str: string to be held
 * Return: pointer to the allocated memory
 */
char *_strdup(char *str)
{
	char *s;
	int i, j;

	if (str == NULL)
		return (NULL);
	i = 0;
	if (*str == 0)
		i++;
	else
		while (*str != 0)
		{
			i++;
			str++;
		}
	s = malloc(sizeof(char) * i + 1);
	if (s != NULL)
	{
		for (j = 0; j <= i; j++)
			*(s + j) = *(str - i + j);
	}

	return (s);
}
