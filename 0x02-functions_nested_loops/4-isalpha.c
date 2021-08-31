#include "main.h"

/**
 * _isalpha - checks if a given int parameter is a letter
 * @c: int parameter to be checked
 * Return: 1 if c is a letter, 0 if otherwise
 */

int _isalpha(int c)
{
	int i;

	i = 65;
	while (i <= 90)
	{
		int j;

		for (j = 97; j <= 122; j++)
		{
			if ((c == j) || (c == i))
				return (1);
		}
		j++;
	}
	return (0);
}
