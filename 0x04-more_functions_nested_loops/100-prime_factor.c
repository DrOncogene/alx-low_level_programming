#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of 612852475143
 * none
 * Return: 0
 */
int main(void)
{
	int i, j, prime;
	long int n;

	n = 612852475143;
	for (i = (n / 2); i >= 2; i--)
	{
		if (n % i == 0)
		{
			prime = 1;
			for (j = 2; j <= (i / 2); j++)
			{
				if (i % j == 0)
				{
					prime = 0;
					break;
				}
			}
			if (prime == 1)
			{
				printf("%d\n", i);
				break;
			}

		}
	}
	return (0);
}
