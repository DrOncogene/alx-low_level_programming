#include "variadic_functions.h"
#include <stddef.h>
#include <stdarg.h>

/**
  * sum_them_all - add all the passed arguments
  * @n: the number of arg passed
  * Return: the sum
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int next, sum;

	if (n == 0)
		return (0);

	va_start(ap, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		next = va_arg(ap, int);
		sum += next;
	}
	va_end(ap);

	return (sum);
}
