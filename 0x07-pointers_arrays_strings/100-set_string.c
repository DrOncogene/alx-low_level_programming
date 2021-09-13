#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: string to be replaced
 * @to: replacement
 * Return: nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
