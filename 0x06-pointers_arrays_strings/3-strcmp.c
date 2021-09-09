#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: negative, 0 or positive int if s1 is less than, matches or greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	int res;

	do
	{
		if (*s1 == *s2)
		{
			res = 0;
			s2++;
		}
		else
		{
			res = *s1 - *s2;
			break;
		}
	} while (*s1++);

	return (res);
}
