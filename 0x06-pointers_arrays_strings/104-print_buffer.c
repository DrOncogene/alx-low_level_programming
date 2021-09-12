#include "main.h"
#include <stdio.h>

/**
 * print_buffer - print a given size of buffer b
 * @b: the buffer
 * @size: number of bytes to print from b
 * Return: nothing
 */
void print_buffer(char *b, int size)
{
	int i, j, k, lines, start;

	if (size > 0)
	{
		lines = (size / 10) + 1;

		i = 0;
		while (i < lines)
		{
			start = i * 10;
			if (i == 0)
				printf("%08x: ", i);
			else
				printf("%08x: ", (i * 10));
			for (k = start; k <= start + 8; k += 2)
			{
				if (k < size)
					printf("%02x", *(b + k));
				else
					printf("%c ", ' ');
				if (k + 1 < size && size > 1)
					printf("%02x ", *(b + k + 1));
				else
					printf("%c  ", ' ');
			}
			for (j = 0; j < 10; j++)
				if (start + j < size)
				{
					if (*(b + start + j) >= 0 && *(b + start + j) <= 31)
						printf("%c", '.');
					else
						printf("%c", *(b + start + j));
				}
			printf("%c", '\n');
			i++;
		}
	}
	else
		printf("%c", '\n');
}
