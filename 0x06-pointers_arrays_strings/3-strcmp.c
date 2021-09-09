#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: neg, 0, or pos int if s1 is less than, matches or greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	int res;

	do {
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
