#include <stdio.h>

/**
 * main - prints the number of arguments passed to the program
 * @argc: represents the number of arguments passed
 * @argv: args array
 * Return: 0
 */
int main(int argc, char *argv[] __attribute((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
