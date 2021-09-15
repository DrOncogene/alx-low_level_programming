#include "main.h"

/**
 * _pow_recursion - calc the power of a number to another
 * @x: number
 * @y: index
 * Return: the result
 */
int _pow_recursion(int x, int y)
{

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	_pow_recursion(x, (y - 1));
	return (x * _pow_recursion(x, y - 1));
}
