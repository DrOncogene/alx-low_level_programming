#include "main.h"

int len(char *s);
int compare(char *s, char *sh, int mid);
/**
 * is_palindrome - checks if a given string is a palindrome
 * @s: string
 * Return: 1 if s is a palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	char *sh;
	int len_s, mid;

	len_s = len(s);
	mid = len_s / 2;
	sh = s + len_s - 1;

	return (compare(s, sh, mid));
}

/**
 * len - finds the length of a string
 * @s: the string
 * Return: length of s
 */
int len(char *s)
{
	if (*s == 0)
		return (0);
	else
		return (len(s + 1) + 1);
}

/**
 * compare - compares half of a string to the other half
 * @s: start of the string
 * @sh: end of string
 * @mid: half the length of string (midpoint)
 * Return: 1 if equal, 0 otherwise
 */
int compare(char *s, char *sh, int mid)
{
	if (s + mid > sh)
		return (1);
	else if (*s == *sh)
	{
		mid--;
		return (1 * compare(s + 1, sh - 1, mid));
	}
	else
		return (0);
}
