#include "main.h"

/**
 * _islower - determines whether a given char is lower
 * @c: a char variable to be checked
 * Return: 1 if c is lower, 0 if otherwise
 */
int _islower(int c)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i == c)
			return (1);
	}
	return (0);
}
