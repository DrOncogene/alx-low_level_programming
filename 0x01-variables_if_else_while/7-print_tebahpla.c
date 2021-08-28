#include <stdio.h>

/**
 * main - prints the alphabet in lowercase in reverse
 * none
 * Return: success value 0
 */
int main(void)
{
	int i;

	for (i = 122; i >= 97; i--)
		putchar(i);
	putchar(10);
	return (0);
}
