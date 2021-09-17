#include "main.h"
#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: arg count
 * @argv: arg array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc >= 1)
		printf("%s\n", argv[0]);
	return (0);
}
