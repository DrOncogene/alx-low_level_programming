#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to which the other one is added
 * @src: string that is added to src
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	char *d;

	d = dest;
	i = 0;
	while (*dest != 0)
	{
		i++;
		dest++;
	}
	while (*src != 0)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (d);
}
