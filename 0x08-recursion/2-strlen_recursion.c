#include "main.h"

int len = 0;
/**
 * _strlen_recursion - finds the length of a string
 * @s: the string
 * Return: length of s
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		len++;
		_strlen_recursion((char *)(s + 1));
	}
	return (len);
}
