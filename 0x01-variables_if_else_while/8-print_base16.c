#include <stdio.h>

/**
 * main - prints all the numbers in the base 16 in lowercase
 * none
 * Return: success value 0
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
		putchar(i);
	for (i = 97; i <= 101; i++)
		putchar(i);
	putchar(10);
	return (0);
}
