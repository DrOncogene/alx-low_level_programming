#include <stdio.h>
#include <stdlib.h>

/**
 * main - print a string using the shell available on the running system
 * none
 * Return: the value 1
 */
int main(void)
{
	system("echo 'and that piece of art is useful\" - \
Dora Korpar, 2015-10-19' 2> -");
	return (1);
}
