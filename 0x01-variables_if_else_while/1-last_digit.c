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
	if ((n % 10) > 5)
		printf("Last digit of n is %s \n", 'greater than 5');
	else if ((n % 10) == 0)
		printf("Last digit of n is %s \n", 'and is 0');
	else if (((n % 10) > 0) && ((n % 10) < 6))
		printf("Last digit of n is %s \n", 'greater than 5);
	return (0);
}
