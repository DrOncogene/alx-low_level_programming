#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the result of the multiplication of two arguments
 * @argc: represents the number of arguments passed
 * @argv: args array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int mul;

	mul = 0;
	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
	{
		printf("%s\n", "Error");
		return (1);
	}
	return (0);
}
