#include "main.h"

/**
 * _strstr - finds the first occurence of a substring in a string
 * @haystack: the string
 * @needle: the substring
 * Return: pointer to the match in string
 */
char *_strstr(char *haystack, char *needle)
{
	int len_n, match, i;

	len_n = 0;
	match = 0;

	while (*needle != 0)
	{
		len_n++;
		needle++;
	}

	while (*haystack != 0)
	{
		if (*haystack == *(needle - len_n))
		{
			if (len_n == 0)
				return (haystack);
			match = 0;
			for (i = 0; i < len_n; i++)
				if (*(haystack + i) == *(needle - len_n + i))
					match = 1;
				else
				{
					match = 0;
					break;
				}
		}
		if (match == 1)
			return (haystack);
		haystack++;
	}

	return ('\0');
}
