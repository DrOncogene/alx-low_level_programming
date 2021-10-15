#include "main.h"

/**
  * get_endianness - determines the endianess of a system
  * none
  * Return: 0 if big endian, 1 if little endian
  */
int get_endianness(void)
{
	char *s = "Hello";

	if (s > (s + 4))
		return (0);
	else
		return (1);
}
