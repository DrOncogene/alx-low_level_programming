#include "3-calc.h"
#include <stddef.h>
#include <stdlib.h>

/**
  * get_op_func - gets the appropriate function to be used
  * @s: the symbol for the op to be performed
  * Return: pointer to the function
  */
int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = 0;
	while (i < 5)
	{
		if (*s == *(ops[i].op))
			break;
		i++;
	}

	return (ops[i].f);
}
