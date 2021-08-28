#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * none
 * Return: success value 0
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if ((i == 101) || (i == 113))
			putchar(0);
		else
			putchar(i);
	}
	putchar(10);
	return (0);
}
