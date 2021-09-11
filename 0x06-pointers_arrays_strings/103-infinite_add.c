#include "main.h"

int len(char *s);
void reverse(char *s1, char *s2, int *len1, int *len2);

/**
 * infinite_add - adds two numbers given as strings
 * @n1: first num
 * @n2: second num
 * @r: buffer to hold the result
 * @size_r: size of r
 * Return: pointer to the result, 0 if result cannot be saved in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, carry, sum, len1, len2;

	carry = 0;
	sum = 0;
	len1 = len(n1);
	len2 = len(n2);

	reverse(n1, n2, &len1, &len2);
	for (i = 1; i <= len2; i++)
	{
		sum = (*(n1 + len1 - i) - '0') + (*(n2 + len2 - i) - '0') + carry;
		carry = sum / 10;
		*(r + len1 - i) = (sum % 10) + '0';
	}
	for (i = len2 + 1; i <= len1; i++)
	{
		sum = (*(n1 + len1 - i) - '0') + carry;
		carry = sum / 10;
		*(r + len1 - i) = (sum % 10) + '0';
	}
	if (carry > 0)
	{
		*(r - 1) = carry + '0';
		*(r + len1) = '\0';
		r--;
	}
	else
		*(r + len1) = '\0';

	if (size_r >= len(r) + 1)
		return (r);

	return (0);
}

/**
 * len - finds the length of a string
 * @s: the string
 * Return: length of s
 */
int len(char *s)
{
	int len;

	len = 0;
	while (*s != 0)
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * reverse - swaps pointers to two strings and their lengths
 * @s1: first string
 * @s2: second string
 * @len1: length of s1
 * @len2: length of s2
 * Return: nothing
 */
void reverse(char *s1, char *s2, int *len1, int *len2)
{
	char *s1_hold;
	int *len1_hold;

	s1_hold = s1;
	len1_hold = len1;
	if (*len2 > *len1)
	{
		s1 = s2;
		s2 = s1_hold;
		*len1 = *len2;
		*len2 = *len1_hold;
	}
}
