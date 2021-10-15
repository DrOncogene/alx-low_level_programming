#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
  * print_binary - prints an int in binary
  * @n: the number
  * Return: nothing
  */
void print_binary(unsigned long int n)
{
	int a, b, c;

	if (n == 0)
	{
		printf("0");
		return;
	}
	for (b = 15; b >= 0; b--)
	{
		a = n >> b;
		if (a & 1)
		{
			printf("1");
			break;
		}
	}

	for (c = b - 1; c >= 0; c--)
	{
		a = n >> c;
		if (a & 1)
			printf("1");
		else
			printf("0");
	}
}
