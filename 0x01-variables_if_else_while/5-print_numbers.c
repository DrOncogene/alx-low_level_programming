#include <stdio.h>

/**
 * main - prints numbers 1-10
 * none
 * Return: success value 0
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		printf("%d", num);
	putchar(10);
	return (0);
}
