#include "main.h"

/**
 * _memset - fills memory with a byte n times
 * @s: memory location
 * @b: bytes to fill with
 * @n: number of b to fill in
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);
}
