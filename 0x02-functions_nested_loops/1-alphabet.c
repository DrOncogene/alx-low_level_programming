#include <unistd.h>
#include "main.h"

/**
 * main - prints the lowercase alphabet
 * none
 * Return: int value 0
 */
int main(void)
{
	int i;

	for(i = 48; i <= 57; i++)
		_putchar(i);
	_putchar('\n');
	return (0);
}
