#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates a random number each time and prints it
 * none
 * Return: success value 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is postive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
