#include "main.h"

/**
 * _atoi - converts a given string to an integer
 * @s: the string to be converted
 * Return: int value of the string, 0 if there's no numbers in s
 */
int _atoi(char *s)
{
	int sign;
	unsigned int num;

	num = 0;
	sign = 1;
	while (*s != 0)
	{
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + *s % 48;
		else if (num > 0)
			break;
		s++;
	}

	return (num * sign);
}
