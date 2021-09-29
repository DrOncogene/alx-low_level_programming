#include "3-calc.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
  * main - performs the specified operation on the passed numbers
  * @argc: arg count
  * @argv: arg vector
  * Return: 0 always
  */
int main(int argc, char *argv[])
{
	int *func(int, int), res;

	if (argc != 4)
	{
		printf("%s\n", "Error");
		exit(98);
	}

	if (*argv[2] != '+' && *argv[2] != '-' && *argv[2] != '*'
&& *argv[2] != '/' && *argv[2] != '%')
	{
		printf("%s\n", "Error");
		exit(99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
	{
		printf("%s\n", "Error");
		exit(100);
	}

	res = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", res);

	return (0);
}
