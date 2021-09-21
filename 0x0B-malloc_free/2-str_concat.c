#include "main.h"
#include <stdlib.h>
#include <stddef.h>

int len(char *s);
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to the result
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, j, len_s;

	len_s = 0;
	if (s1 == NULL && s2 == NULL)
		len_s++;
	else if (s1 == NULL && s2 != NULL)
		len_s = 1 + len(s2);
	else if (s1 != NULL && s2 == NULL)
		len_s = len(s1) + 1;
	else
		len_s = len(s1) + len(s2);

	s = malloc(sizeof(char) * len_s);
	if (s != NULL)
	{
		for (i = 0 ; i < len(s1); i++)
			*(s + i) = *(s1 + i);
		for (j = 0; j < len(s2); j++)
			*(s + i + j) = *(s2 + j);
		*(s + len_s) = '\0';
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
	else
		return (len(s + 1) + 1);
}
