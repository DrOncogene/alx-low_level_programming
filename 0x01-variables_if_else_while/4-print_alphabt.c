#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * none
 * Return: success value 0
 */
int main(void)
{
	char alpha[24] = {97, 98, 99, 100, 102, 103, 104, 105, 106, 107,
		108, 109, 110, 111, 112, 114, 115, 116, 117, 118, 119,
		120, 121, 122};
	int i;

	for (i = 0; i < 24; i++)
	{
		putchar(alpha[i]);
	}
	putchar(10);
	return (0);
}
