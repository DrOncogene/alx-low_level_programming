#include "main.h"

/**
 * print_alphabet - prints the lowercase alphabet
 * none
 * Return: int value 0
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
		_putchar(i);
	_putchar('\n');
}
