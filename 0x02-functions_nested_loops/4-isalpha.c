#include "main.h"

/**
 * _isalpha - checks if a given int parameter is a letter
 * @c: int parameter to be checked
 * Return: 1 if c is a letter, 0 if otherwise
 */

int _isalpha(int c)
{
	int i;

	for (i = 65; i <= 122; i++)
	{
		if (i <  91 || i > 96)
		{
			if (c == i)
				return (1);
		}
	}
	return (0);
}
