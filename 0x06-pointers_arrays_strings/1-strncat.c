#include "main.h"

/**
 * _strncat - concatenates two strings with n characters from src
 * @dest: string to which the other one is added
 * @src: string that is added to src
 * @n: number of chars from src to be added to dest
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	char *d;

	d = dest;
	while (*dest != 0)
	{
		dest++;
	}
	for (i = 0; i < n; i++)
	{
		if (*src == 0)
			break;
		*dest = *src;
		src++;
		dest++;
	}
	return (d);
}
