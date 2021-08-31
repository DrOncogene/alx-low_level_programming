#include "main.h"

/**
 * _isalpha - checks if a given int parameter is a letter
 * @c: int parameter to be checked
 * Return: 1 if c is a letter, 0 if otherwise
 */

int _isalpha(int c)
{
	if ((65 <= c <= 90) || (97 <= c <= 122))
		return (1);
	else
		return (0);
}
