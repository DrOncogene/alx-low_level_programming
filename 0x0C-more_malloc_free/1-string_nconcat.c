#include "main.h"
#include <stdlib.h>
#include <stddef.h>

unsigned int len(char *s);
/**
 * string_nconcat - concatenates n chars from s2 to s1
 * @s1: first string
 * @s2: second string
 * @n: n of chars to be concatenated
 * Return: pointer to the result
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s, *s_hold;
	unsigned int len_s1, len_s2, len_s, i, j;

	if (s1 == NULL && s2 != NULL)
		len_s1 = 0;
	else if (s2 == NULL && s1 != NULL)
		len_s2 = 0;
	else if (s1 == NULL && s2 == NULL)
	{
		len_s1 = 0;
		len_s2 = 0;
	}
	else
	{
		len_s1 = len(s1);
		len_s2 = len(s2);
	}

	if (n >= len_s2)
	{
		n = len_s2;
		len_s = len_s1 + len_s2;
	}
	else
		len_s = len_s1 + n;
	s = malloc(sizeof(char) * (len_s + 1));
	s_hold = s;

	if (s != NULL)
	{
		i = 0;
		if (len_s1 > 0)
			for (i = 0; i < len_s1; i++)
				*(s_hold + i) = *(s1 + i);
		if (n > 0)
			for (j = 0; j < n; j++, i++)
				*(s_hold + i) = *(s2 + j);
		*(s_hold + i) = '\0';
	}
	else
		return (NULL);

	return (s);
}

/**
 * len - finds the length of a string
 * @s: the string
 * Return: len of s
 */
unsigned int len(char *s)
{
	if (*s == 0)
		return (0);
	return (len(s + 1) + 1);
}
