#include "main.h"

/**
 * _strcpy - copies the string in src to dest
 * @dest: destination of string
 * @src: string source
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (*src != 0)
	{
		*(dest + i) = *src;
		src++;
		i++;
	}
	*(dest + i) = '\0';

	return (dest);
}
